import sqlite3
import pandas as pd

def find_person_info_by_ids(db_file, person_ids):
    try:
        # Connect to the SQLite database
        conn = sqlite3.connect(db_file)

        # Create a cursor object to interact with the database
        cursor = conn.cursor()

        # Prepare a parameterized SQL query to retrieve name and license_plate for the specified person_ids
        query = """
        SELECT p.id, p.name, p.license_plate
        FROM people p
        WHERE p.id IN ({})
        """.format(','.join(['?'] * len(person_ids)))

        # Execute the query with the specified person_id parameters
        cursor.execute(query, person_ids)

        # Fetch all results (person IDs, names, license plates) from the cursor
        results = cursor.fetchall()

        if results:
            # Create a DataFrame to display the person information
            df = pd.DataFrame(results, columns=['ID', 'Name', 'License Plate'])
            print("Person Information:")
            print(df.to_string(index=False))
        else:
            print("No person found with the specified IDs.")

    except sqlite3.Error as e:
        print("Error reading data from SQLite database:", e)

    finally:
        # Close the database connection
        conn.close()

# Provide the path to your SQLite database file (fiftyville.db)
db_file_path = 'python/fiftyville.db'

# Specify the person_ids of interest
person_ids = [
    686048,
    514354,
    458378,
    395717,
    396669,
    467400,
    449774,
    438727
]

# Call the function to retrieve name and license_plate associated with the specified person_ids
find_person_info_by_ids(db_file_path, person_ids)
