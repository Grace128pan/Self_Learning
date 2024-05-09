"""
Task:
Write a SQL query to list the names of all people who starred in Toy Story.
Your query should output a table with a single column for the name of each person.
You may assume that there is only one movie in the database with the title Toy Story.

results in a table with 1 column and 4 rows.
"""

import sqlite3

# Function to fetch and print table schema
def print_table_schema(conn, table_name):
    cursor = conn.cursor()
    cursor.execute(f"PRAGMA table_info({table_name})")
    columns = cursor.fetchall()
    print(f"Table: {table_name}")
    print("Column Name | Type")
    print("-------------------")
    for column in columns:
        print(f"{column[1]} | {column[2]}")
    print("\n")

# Connect to the SQLite database
conn = sqlite3.connect('python/movies.db')

try:
    # Get a list of all tables in the database
    cursor = conn.cursor()
    cursor.execute("SELECT name FROM sqlite_master WHERE type='table';")
    tables = cursor.fetchall()

    if tables:
        print("Tables in 'movies.db':")
        for table in tables:
            print(table[0])

            # Print table schema
            print_table_schema(conn, table[0])

            # Fetch sample data (first 5 rows) from each table
            print(f"Sample Data from Table: {table[0]}")
            cursor.execute(f"SELECT * FROM {table[0]} LIMIT 5;")
            sample_data = cursor.fetchall()
            for row in sample_data:
                print(row)
            print("\n")

    else:
        print("No tables found in the database.")

except sqlite3.Error as e:
    print("Error:", e)

finally:
    # Close the connection
    if conn:
        conn.close()
