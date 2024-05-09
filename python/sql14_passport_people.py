import sqlite3
import pandas as pd

def find_person_info_by_passport_numbers(db_file, passport_numbers):
    try:
        # Connect to the SQLite database
        conn = sqlite3.connect(db_file)

        # Create a cursor object to interact with the database
        cursor = conn.cursor()

        # Prepare a parameterized SQL query to retrieve phone_number, name, and license_plate for the specified passport numbers
        query = """
        SELECT p.passport_number, p.name, p.phone_number, p.license_plate
        FROM people p
        WHERE p.passport_number IN ({})
        """.format(','.join(['?'] * len(passport_numbers)))

        # Execute the query with the specified passport numbers as parameters
        cursor.execute(query, passport_numbers)
        person_records = cursor.fetchall()

        if person_records:
            # Create a DataFrame to display the person information
            df = pd.DataFrame(person_records, columns=['Passport Number', 'Name', 'Phone Number', 'License Plate'])
            print("Person Information:")
            print(df.to_string(index=False))
        else:
            print("No people found with the specified passport numbers.")

    except sqlite3.Error as e:
        print("Error reading data from SQLite database:", e)

    finally:
        # Close the database connection
        conn.close()

# Provide the path to your SQLite database file (fiftyville.db)
db_file_path = 'python/fiftyville.db'

# Specify the passport numbers of interest
passport_numbers_of_interest = ['5773159633', '1988161715']

# Call the function to retrieve phone numbers, names, and license plates associated with the specified passport numbers
find_person_info_by_passport_numbers(db_file_path, passport_numbers_of_interest)
