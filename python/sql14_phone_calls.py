import sqlite3

def get_phone_calls_by_date_and_duration(db_file, year, month, day, max_duration):
    try:
        # Connect to the SQLite database
        conn = sqlite3.connect(db_file)

        # Create a cursor object to interact with the database
        cursor = conn.cursor()

        # Define the SQL query to retrieve phone call information for a specific date and duration
        query = """
        SELECT id, caller, receiver, duration
        FROM phone_calls
        WHERE year = ? AND month = ? AND day = ?
        AND duration < ?
        """

        # Execute the query with the specified date and duration parameters
        cursor.execute(query, (year, month, day, max_duration))

        # Fetch all results (all columns and records) from the cursor
        results = cursor.fetchall()

        if results:
            print("Phone Calls on {}-{}-{} with Duration < {} seconds:".format(year, month, day, max_duration))
            for row in results:
                print("ID: {}, Caller: {}, Receiver: {}, Duration: {} seconds".format(row[0], row[1], row[2], row[3]))
        else:
            print("No phone calls found on {}-{}-{} with duration < {} seconds.".format(year, month, day, max_duration))

    except sqlite3.Error as e:
        print("Error reading data from SQLite database:", e)

    finally:
        # Close the cursor and database connection
        if cursor:
            cursor.close()
        if conn:
            conn.close()

# Provide the path to your SQLite database file (fiftyville.db)
db_file_path = 'python/fiftyville.db'

# Specify the date of interest (July 28, 2021) and maximum duration (less than 60 seconds)
year = 2021
month = 7
day = 28
max_duration = 60  # Duration in seconds (less than 1 minute)

# Call the function to retrieve phone calls for the specified date and duration
get_phone_calls_by_date_and_duration(db_file_path, year, month, day, max_duration)
