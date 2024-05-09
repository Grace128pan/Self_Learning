import sqlite3

def display_interviews_by_date(db_file, year, month, day):
    try:
        # Connect to the SQLite database
        conn = sqlite3.connect(db_file)

        # Create a cursor object to interact with the database
        cursor = conn.cursor()

        # Define the SQL query to retrieve interviews on a specific date
        query = """
        SELECT *
        FROM interviews
        WHERE year = ? AND month = ? AND day = ?
        """

        # Execute the query with the specified date parameters
        cursor.execute(query, (year, month, day))

        # Fetch all results (all columns and records) from the cursor
        results = cursor.fetchall()

        if results:
            print("Interviews on {}-{}-{}:".format(year, month, day))
            for row in results:
                print(row)
        else:
            print("No interviews found for {}-{}-{}.".format(year, month, day))

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

# Specify the year, month, and day of interest (July 28, 2021)
year = 2021
month = 7
day = 28

# Call the function to display interviews for the specified date
display_interviews_by_date(db_file_path, year, month, day)
