"""
Task:
Write a SQL query to list all movies released in 2010 and their ratings, in descending order by rating. For movies with the same rating, order them alphabetically by title.
Your query should output a table with two columns, one for the title of each movie and one for the rating of each movie.
Movies that do not have ratings should not be included in the result.

results in a table with 2 columns and 7,192 rows.
"""
import sqlite3
import pandas as pd

# Connect to the SQLite database file
connection = sqlite3.connect("python/movies.db")

try:
    # Define the SQL query to select movies released in 2010 with ratings, ordered by rating (descending) and title (ascending)
    query = """
            SELECT m.title, r.rating
            FROM movies m
            INNER JOIN ratings r ON m.id = r.movie_id
            WHERE m.year = 2010
            ORDER BY r.rating DESC, m.title ASC
            """

    # Execute the SQL query and load result into a DataFrame
    df = pd.read_sql_query(query, connection)

    # Display the result (titles and ratings of movies released in 2010)
    if not df.empty:
        print(df.to_string(index=False))

    # Display the number of rows (movies) and columns (title, rating)
    num_rows, num_columns = df.shape
    print(f"\nNumber of movies released in 2010 with ratings: {num_rows}")
    print(f"Number of columns in the result: {num_columns}")

finally:
    # Close the connection to the database
    connection.close()


