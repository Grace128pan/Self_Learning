import sqlite3

def get_airport_city_by_id(db_file, airport_id):
    try:
        # Connect to the SQLite database
        conn = sqlite3.connect(db_file)

        # Create a cursor object to interact with the database
        cursor = conn.cursor()

        # Define the SQL query to retrieve the city for a specific airport ID
        query = """
        SELECT city
        FROM airports
        WHERE id = ?
        """

        # Execute the query with the specified airport ID parameter
        cursor.execute(query, (airport_id,))

        # Fetch the result (city) from the cursor
        result = cursor.fetchone()

        if result:
            print("City for Airport ID {}: {}".format(airport_id, result[0]))
        else:
            print("No airport found with ID {}.".format(airport_id))

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

# Specify the airport ID of interest (ID = 4)
airport_id = 4

# Call the function to retrieve the city for the specified airport ID
get_airport_city_by_id(db_file_path, airport_id)
