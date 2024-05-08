"""
Task:
Write a SQL query to list the titles and release years of all Harry Potter movies, in chronological order.
Your query should output a table with two columns, one for the title of each movie and one for the release year of each movie.
You may assume that the title of all Harry Potter movies will begin with the words “Harry Potter”, and that if a movie title begins with the words “Harry Potter”, it is a Harry Potter movie.

results in a table with 2 columns and 11 rows.
"""
import sqlite3
import pandas as pd

# Connect to the SQLite database file
connection = sqlite3.connect("python/movies.db")

try:
    # Define the SQL query to select titles and release years of Harry Potter movies
    query = """
            SELECT title, year
            FROM movies
            WHERE title LIKE 'Harry Potter%'
            ORDER BY year
            """

    # Execute the SQL query and load result into a DataFrame
    df = pd.read_sql_query(query, connection)

    # Display the titles and release years of Harry Potter movies
    if not df.empty:
        print("\nHarry Potter Movies:")
        print(df.to_string(index=False))

    # Display the number of rows (movies) and columns (title, year)
    num_rows, num_columns = df.shape
    print(f"\nNumber of Harry Potter movies: {num_rows}")
    print(f"Number of columns in the result: {num_columns}")

finally:
    # Close the connection to the database
    connection.close()
