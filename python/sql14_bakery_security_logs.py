import sqlite3
import pandas as pd

def get_bakery_logs_by_timeframe(db_file, year, month, day, start_hour, end_hour):
    try:
        # Connect to the SQLite database
        conn = sqlite3.connect(db_file)

        # Define the SQL query to retrieve bakery security logs within the specified time frame
        query = f"""
        SELECT id, year, month, day, hour, minute, activity, license_plate
        FROM bakery_security_logs
        WHERE year = ? AND month = ? AND day = ?
        AND hour >= ? AND hour < ?
        """

        # Execute the query with the specified parameters using pandas read_sql_query
        df = pd.read_sql_query(query, conn, params=(year, month, day, start_hour, end_hour))

        if not df.empty:
            # Display the dataframe with license plates in text format
            print("Bakery Security Logs on {}-{}-{} between {} AM and {} AM:".format(year, month, day, start_hour, end_hour))
            for index, row in df.iterrows():
                print(f"ID: {row['id']}, Timestamp: {row['year']}-{row['month']}-{row['day']} {row['hour']}:{row['minute']}, Activity: {row['activity']}, License Plate: {get_license_plate_text(row['license_plate'])}")
        else:
            print("No bakery security logs found on {}-{}-{} between {} AM and {} AM.".format(year, month, day, start_hour, end_hour))

    except sqlite3.Error as e:
        print("Error reading data from SQLite database:", e)

    finally:
        # Close the database connection
        conn.close()

def get_license_plate_text(license_plate):
    # This function could be expanded to map license plate codes to text descriptions
    # For simplicity, it returns the license plate as is in this example
    return license_plate

# Provide the path to your SQLite database file (fiftyville.db)
db_file_path = 'python/fiftyville.db'

# Specify the date and time frame of interest (July 28th, 2024 from 10:00 AM to 11:00 AM)
year = 2021
month = 7
day = 28
start_hour = 10
end_hour = 11

# Call the function to retrieve bakery security logs within the specified time frame
get_bakery_logs_by_timeframe(db_file_path, year, month, day, start_hour, end_hour)



