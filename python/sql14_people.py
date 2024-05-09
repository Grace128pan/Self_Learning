import sqlite3
import pandas as pd

def find_people_by_license_plates(db_file, license_plates):
    try:
        # Connect to the SQLite database
        conn = sqlite3.connect(db_file)

        # Create a cursor object to interact with the database
        cursor = conn.cursor()

        # Prepare a parameterized SQL query to retrieve names and phone numbers for the specified license plates
        query = """
        SELECT p.name, p.phone_number, p.license_plate
        FROM people p
        WHERE p.license_plate IN ({})
        """.format(','.join(['?'] * len(license_plates)))

        # Execute the query with the specified license plate parameters
        cursor.execute(query, license_plates)

        # Fetch all results (names, phone numbers, license plates) from the cursor
        results = cursor.fetchall()

        if results:
            print("People Found:")
            for result in results:
                name, phone_number, plate = result
                print("Name: {}, Phone Number: {}, License Plate: {}".format(name, phone_number, plate))
        else:
            print("No people found with the specified license plates.")

    except sqlite3.Error as e:
        print("Error reading data from SQLite database:", e)

    finally:
        # Close the database connection
        conn.close()

# Provide the path to your SQLite database file (fiftyville.db)
db_file_path = 'python/fiftyville.db'

# Specify the license plates of interest
license_plates = [
    '5P2BI95',
    '94KL13X',
    '6P58WS2',
    '4328GD8',
    'G412CB7',
    'L93JTIZ',
    '322W7JE',
    '0NTHK55',
    '1106N58'
]

# Call the function to find people (names and phone numbers) by license plates
find_people_by_license_plates(db_file_path, license_plates)

