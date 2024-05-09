import sqlite3
import pandas as pd

def find_person_ids_by_account_numbers(db_file, account_numbers):
    try:
        # Connect to the SQLite database
        conn = sqlite3.connect(db_file)

        # Create a cursor object to interact with the database
        cursor = conn.cursor()

        # Prepare a parameterized SQL query to retrieve person_ids for the specified account numbers
        query = """
        SELECT account_number, person_id, creation_year
        FROM bank_accounts
        WHERE account_number IN ({})
        """.format(','.join(['?'] * len(account_numbers)))

        # Execute the query with the specified account number parameters
        cursor.execute(query, account_numbers)

        # Fetch all results (account numbers, person IDs, creation years) from the cursor
        results = cursor.fetchall()

        if results:
            # Create a DataFrame to display the bank account information
            df = pd.DataFrame(results, columns=['Account Number', 'Person ID', 'Creation Year'])
            print("Bank Accounts Information:")
            print(df.to_string(index=False))
        else:
            print("No bank accounts found with the specified account numbers.")

    except sqlite3.Error as e:
        print("Error reading data from SQLite database:", e)

    finally:
        # Close the database connection
        conn.close()

# Provide the path to your SQLite database file (fiftyville.db)
db_file_path = 'python/fiftyville.db'

# Specify the account numbers of interest
account_numbers = [
    28500762,
    28296815,
    76054385,
    49610011,
    16153065,
    25506511,
    81061156,
    26013199
]

# Call the function to retrieve person_ids associated with the specified account numbers
find_person_ids_by_account_numbers(db_file_path, account_numbers)
