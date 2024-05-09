"""
Task:
 The town of Fiftyville has called upon you to solve the mystery of the stolen duck. Authorities believe that the thief stole the duck and then, shortly afterwards, took a flight out of town with the help of an accomplice. Your goal is to identify:

Who the thief is,
What city the thief escaped to, and
Who the thief’s accomplice is who helped them escape
All you know is that the theft took place on July 28, 2023 and that it took place on Humphrey Street.

How will you go about solving this mystery? The Fiftyville authorities have taken some of the town’s records from around the time of the theft and prepared a SQLite database for you, fiftyville.db, which contains tables of data from around the town. You can query that table using SQL SELECT queries to access the data of interest to you. Using just the information in the database, your task is to solve the mystery.

Expected result is both thief and accomplce are male.
Their names are connected with batman.
"""

import sqlite3

def display_crime_scene_reports(db_file):
    try:
        # Connect to the SQLite database
        conn = sqlite3.connect(db_file)

        # Create a cursor object to interact with the database
        cursor = conn.cursor()

        # Define the SQL query to retrieve all columns and records from crime_scene_reports
        query = """
        SELECT *
        FROM crime_scene_reports
        """

        # Execute the query to fetch all records from the crime_scene_reports table
        cursor.execute(query)

        # Fetch all results (all columns and records) from the cursor
        results = cursor.fetchall()

        if results:
            print("Crime Scene Reports:")
            for row in results:
                print(row)
        else:
            print("No crime scene reports found in the database.")

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

# Call the function to display all information and contents from crime_scene_reports
display_crime_scene_reports(db_file_path)


