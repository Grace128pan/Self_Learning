"""
Task:
Write a SQL query to list the names of all people who have directed a movie that received a rating of at least 9.0.
Your query should output a table with a single column for the name of each person.
If a person directed more than one movie that received a rating of at least 9.0, they should only appear in your results once.

results in a table with 1 column and 3,854 rows.
"""
import sqlite3
import pandas as pd

# Connect to the SQLite database
conn = sqlite3.connect('python/movies.db')

# Write the SQL query to find directors of highly rated movies
query = '''
    SELECT DISTINCT p.name
    FROM people p
    JOIN directors d ON p.id = d.person_id
    JOIN ratings r ON d.movie_id = r.movie_id
    WHERE r.rating >= 9.0
'''

# Execute the query and read the results into a DataFrame
result = pd.read_sql_query(query, conn)

# Close the database connection
conn.close()

# Display the resulting DataFrame with unique director names
print(result)
