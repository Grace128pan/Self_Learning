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
import pandas as pd

# Connect to the SQLite database
conn = sqlite3.connect('python/fiftyville.db')

# Function to query table metadata and return as a DataFrame
def get_table_info(table_name):
    # Define SQL query to fetch table metadata
    query = f"PRAGMA table_info({table_name});"
    # Execute query and read results into DataFrame
    table_info = pd.read_sql_query(query, conn)
    return table_info

# Get list of all tables in the database
tables_query = "SELECT name FROM sqlite_master WHERE type='table';"
tables = pd.read_sql_query(tables_query, conn)

# Iterate over each table and retrieve its metadata
all_table_info = {}
for table_name in tables['name']:
    table_info = get_table_info(table_name)
    all_table_info[table_name] = table_info

# Close the database connection
conn.close()

# Display detailed information about each table
for table_name, table_info in all_table_info.items():
    print(f"Table: {table_name}")
    print(table_info)
    print()  # Print empty line for separation




