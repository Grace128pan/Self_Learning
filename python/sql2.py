'''
Write a SQL query to determine the birth year of Emma Stone.
Your query should output a table with a single column and a single row (not counting the header) containing Emma Stone’s birth year.
You may assume that there is only one person in the database with the name Emma Stone.

results in a table with 1 column and 1 row.
"""
'''
import sqlite3
import pandas as pd

# Connect to the SQLite database file
connection = sqlite3.connect("python/movies.db")

try:
    # Define the SQL query to retrieve Emma Stone's birth year
    query = """
            SELECT birth
            FROM people
            WHERE name = 'Emma Stone'
            """

    # Execute the SQL query and load result into a DataFrame
    df = pd.read_sql_query(query, connection)

    # Display Emma Stone's birth year
    if not df.empty:
        print("Emma Stone's Birth Year:")
        print(df.iloc[0, 0])  # Access the first row, first column value

finally:
    # Close the connection to the database
    connection.close()


