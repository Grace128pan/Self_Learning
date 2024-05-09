import sqlite3
import pandas as pd

def get_atm_transactions_by_criteria(db_file, year, month, day, atm_location, transaction_type):
    try:
        # Connect to the SQLite database
        conn = sqlite3.connect(db_file)

        # Create a cursor object to interact with the database
        cursor = conn.cursor()

        # Define the SQL query to retrieve ATM transactions based on specified criteria
        query = """
        SELECT id, account_number, year, month, day, atm_location, transaction_type, amount
        FROM atm_transactions
        WHERE year = ? AND month = ? AND day = ?
        AND atm_location = ? AND transaction_type = ?
        """

        # Execute the query with the specified criteria parameters
        cursor.execute(query, (year, month, day, atm_location, transaction_type))

        # Fetch all results (transactions) from the cursor
        results = cursor.fetchall()

        if results:
            # Create a DataFrame to display the ATM transactions
            df = pd.DataFrame(results, columns=['ID', 'Account Number', 'Year', 'Month', 'Day', 'ATM Location', 'Transaction Type', 'Amount'])
            print("ATM Transactions on {}-{}-{} at '{}' ({}):".format(year, month, day, atm_location, transaction_type))
            print(df.to_string(index=False))
        else:
            print("No ATM transactions found on {}-{}-{} at '{}' ({})".format(year, month, day, atm_location, transaction_type))

    except sqlite3.Error as e:
        print("Error reading data from SQLite database:", e)

    finally:
        # Close the database connection
        conn.close()

# Provide the path to your SQLite database file (fiftyville.db)
db_file_path = 'python/fiftyville.db'

# Specify the date and criteria of interest
year = 2021
month = 7
day = 28
atm_location = 'Leggett Street'
transaction_type = 'withdraw'

# Call the function to retrieve ATM transactions based on the specified criteria
get_atm_transactions_by_criteria(db_file_path, year, month, day, atm_location, transaction_type)

