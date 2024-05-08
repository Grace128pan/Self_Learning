"""
Task:
Write a SQL query to determine the number of movies with an IMDb rating of 10.0.
Your query should output a table with a single column and a single row (not counting the header) containing the number of movies with a 10.0 rating.

results in a table with 1 column and 1 row.
"""
import sqlite3
import pandas as pd

# Connect to the SQLite database file
connection = sqlite3.connect("python/movies.db")

try:
    # Define the SQL query to count movies with an IMDb rating of 10.0
    query = """
            SELECT COUNT(*) AS num_movies_with_rating_10
            FROM ratings
            WHERE rating = 10.0
            """

    # Execute the SQL query and load result into a DataFrame
    df = pd.read_sql_query(query, connection)

    # Display the number of movies with a rating of 10.0
    if not df.empty:
        num_movies_with_rating_10 = df.iloc[0, 0]
        print(f"Number of movies with an IMDb rating of 10.0: {num_movies_with_rating_10}")

finally:
    # Close the connection to the database
    connection.close()




