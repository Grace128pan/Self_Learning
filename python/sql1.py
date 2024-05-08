'''Task1:
Write a SQL query to list the titles of all movies released in 2008.
Your query should output a table with a single column for the title of each movie.

results in a table with 1 column and 10,276 rows.
'''
import sqlite3
import pandas as pd

# Connect to the SQLite database file
connection = sqlite3.connect("python/movies.db")

try:
    # SQL query to select the titles of movies released in 2008
    query = """
            SELECT title
            FROM movies
            WHERE year = 2008
            """

    # Execute the SQL query and load results into a DataFrame
    df = pd.read_sql_query(query, connection)

    # Display the DataFrame (table) with movie titles
    print(df)

finally:
    # Close the connection to the database
    connection.close()





