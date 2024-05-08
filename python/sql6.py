"""
Task:
Write a SQL query to determine the average rating of all movies released in 2012.
Your query should output a table with a single column and a single row (not counting the header) containing the average rating.

results in a table with 1 column and 1 row.
"""

import sqlite3
import pandas as pd

# Connect to the SQLite database file
connection = sqlite3.connect("python/movies.db")

try:
    # Define the SQL query to calculate the average rating of movies released in 2012
    query = """
            SELECT AVG(rating) AS average_rating
            FROM ratings
            WHERE movie_id IN (
                SELECT id
                FROM movies
                WHERE year = 2012
            )
            """

    # Execute the SQL query and load result into a DataFrame
    df = pd.read_sql_query(query, connection)

    # Display the average rating of movies released in 2012
    if not df.empty:
        average_rating = df.iloc[0, 0]
        print(f"Average rating of movies released in 2012: {average_rating:.2f}")

finally:
    # Close the connection to the database
    connection.close()
