import sqlite3
import pandas as pd

def find_passport_numbers_and_flights(db_file, names):
    try:
        # Connect to the SQLite database
        conn = sqlite3.connect(db_file)

        # Create a cursor object to interact with the database
        cursor = conn.cursor()

        # Prepare a parameterized SQL query to retrieve passport numbers for the specified names
        query = """
        SELECT id, passport_number
        FROM people
        WHERE name IN ({})
        """.format(','.join(['?'] * len(names)))

        # Execute the query with the specified names as parameters
        cursor.execute(query, names)
        person_records = cursor.fetchall()

        if person_records:
            passport_numbers = [record[1] for record in person_records]

            # Prepare a parameterized SQL query to retrieve flight IDs for the specified passport numbers
            query_flights = """
            SELECT flight_id, passport_number
            FROM passengers
            WHERE passport_number IN ({})
            """.format(','.join(['?'] * len(passport_numbers)))

            # Execute the query to fetch flight IDs associated with the passport numbers
            cursor.execute(query_flights, passport_numbers)
            flight_records = cursor.fetchall()

            if flight_records:
                # Create a DataFrame to display the flight IDs and corresponding passport numbers
                df = pd.DataFrame(flight_records, columns=['Flight ID', 'Passport Number'])
                print("Flight IDs and Passport Numbers:")
                print(df.to_string(index=False))
            else:
                print("No flight records found for the specified passport numbers.")
        else:
            print("No people found with the specified names.")

    except sqlite3.Error as e:
        print("Error reading data from SQLite database:", e)

    finally:
        # Close the database connection
        conn.close()

# Provide the path to your SQLite database file (fiftyville.db)
db_file_path = 'python/fiftyville.db'

# Specify the names of interest
names_of_interest = ['Iman', 'Taylor', 'Luca', 'Diana', 'Bruce']

# Call the function to retrieve passport numbers and corresponding flight IDs
find_passport_numbers_and_flights(db_file_path, names_of_interest)
