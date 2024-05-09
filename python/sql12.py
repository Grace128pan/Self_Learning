"""
Task:
Write a SQL query to list the titles of all movies in which both Bradley Cooper and Jennifer Lawrence starred.
Your query should output a table with a single column for the title of each movie.
You may assume that there is only one person in the database with the name Bradley Cooper.
You may assume that there is only one person in the database with the name Jennifer Lawrence.

Find the ID of Bradley Cooper
Find the ID of Jennifer Lawrence
Find the IDs of movies associated with Bradley Cooper’s ID
Find the IDs of movies associated with Jennifer Lawrence’s ID
Find movie titles from the movie IDs associated with both Bradley Cooper and Jennifer Lawrence
Then, try nesting those queries to arrive at a single query that returns the movies in which both Bradley Coop

results in a table with 1 column and 4 rows.
"""
import sqlite3
import pandas as pd

try:
    # Connect to the SQLite database
    conn = sqlite3.connect('python/movies.db')

    # Write SQL subquery to find the movie titles where both Bradley Cooper and Jennifer Lawrence starred
    query = '''
        SELECT m.title
        FROM movies m
        JOIN stars s1 ON m.id = s1.movie_id
        JOIN people p1 ON s1.person_id = p1.id
        WHERE p1.name = 'Bradley Cooper'
        AND m.id IN (
            SELECT m2.id
            FROM movies m2
            JOIN stars s2 ON m2.id = s2.movie_id
            JOIN people p2 ON s2.person_id = p2.id
            WHERE p2.name = 'Jennifer Lawrence'
        )
    '''

    # Execute the query and read the results into a DataFrame
    result = pd.read_sql_query(query, conn)

    # Display the resulting DataFrame with movies where both starred
    print(result)

except sqlite3.Error as e:
    print(f"An error occurred: {e}")

finally:
    # Close the database connection
    if conn:
        conn.close()

