"""
Task:
Write a SQL query to list the names of all people who starred in a movie released in 2004, ordered by birth year.
Your query should output a table with a single column for the name of each person.
People with the same birth year may be listed in any order.
No need to worry about people who have no birth year listed, so long as those who do have a birth year are listed in order.
If a person appeared in more than one movie in 2004, they should only appear in your results once.

results in a table with 1 column and 19,325 rows.
"""

import sqlite3
import pandas as pd

# Connect to the SQLite database
conn = sqlite3.connect('python/movies.db')

try:
    # Define the SQL query to retrieve names of people who starred in movies released in 2004
    query = """
        SELECT DISTINCT p.name
        FROM movies m
        JOIN stars s ON m.id = s.movie_id
        JOIN people p ON s.person_id = p.id
        WHERE m.year = 2004
        ORDER BY p.birth;  -- Ordering by birth year of people
    """

    # Execute the SQL query and load results into a DataFrame using pandas
    df = pd.read_sql_query(query, conn)

    # Display the DataFrame containing names of people who starred in 2004 movies
    print(df)

except sqlite3.Error as e:
    print("Error executing SQL query:", e)

finally:
    # Close the connection
    conn.close()
