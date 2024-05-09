"""
Task:
Write a SQL query to list the titles of the five highest rated movies (in order) that Chadwick Boseman starred in, starting with the highest rated.
Your query should output a table with a single column for the title of each movie.
You may assume that there is only one person in the database with the name Chadwick Boseman.

results in a table with 1 column and 5 rows.
"""

import sqlite3
import pandas as pd

# Connect to the SQLite database
conn = sqlite3.connect('python/movies.db')

# Write the SQL query to find the top 5 highest rated movies starring Chadwick Boseman
query_code = '''
    SELECT m.title
    FROM movies m
    JOIN stars s ON m.id = s.movie_id
    JOIN people p ON s.person_id = p.id
    JOIN ratings r ON m.id = r.movie_id
    WHERE p.name = 'Chadwick Boseman'
    ORDER BY r.rating DESC
    LIMIT 5
'''

# Execute the query and read the results into a DataFrame
result = pd.read_sql_query(query_code, conn)

# Close the database connection
conn.close()

# Display the resulting DataFrame with top 5 highest rated movies
print(result)
