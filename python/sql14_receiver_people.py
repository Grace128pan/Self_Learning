import sqlite3
import pandas as pd

def find_names_by_phone_numbers(db_file, phone_numbers):
    try:
        # Connect to the SQLite database
        conn = sqlite3.connect(db_file)

        # Create a cursor object to interact with the database
        cursor = conn.cursor()

        # Prepare a parameterized SQL query to retrieve name for the specified phone numbers
        query = """
        SELECT p.phone_number, p.name
        FROM people p
        WHERE p.phone_number IN ({})
        """.format(','.join(['?'] * len(phone_numbers)))

        # Execute the query with the specified phone numbers as parameters
        cursor.execute(query, phone_numbers)
        person_records = cursor.fetchall()

        if person_records:
            # Create a DataFrame to display the person information
            df = pd.DataFrame(person_records, columns=['Phone Number', 'Name'])
            print("Person Information:")
            print(df.to_string(index=False))
        else:
            print("No people found with the specified phone numbers.")

    except sqlite3.Error as e:
        print("Error reading data from SQLite database:", e)

    finally:
        # Close the database connection
        conn.close()

# Provide the path to your SQLite database file (fiftyville.db)
db_file_path = 'python/fiftyville.db'

# Specify the phone numbers of interest
phone_numbers_of_interest = ['(375) 555-8161', '(676) 555-6554']

# Call the function to retrieve names associated with the specified phone numbers
find_names_by_phone_numbers(db_file_path, phone_numbers_of_interest)
