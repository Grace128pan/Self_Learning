"""
Task:
Write a SQL query to list the names of all people who starred in a movie in which Kevin Bacon also starred.
Your query should output a table with a single column for the name of each person.
There may be multiple people named Kevin Bacon in the database. Be sure to only select the Kevin Bacon born in 1958.
Kevin Bacon himself should not be included in the resulting list.

Find the ID of Kevin Bacon (the one born in 1958!)
Find the IDs of movies associated with Kevin Bacon’s ID
Find the IDs of people associated with those movie IDs
Find the names of people with those people IDs

results in a table with 1 column and 182 rows.

"""

import sqlite3
import pandas as pd

# Connect to the SQLite database
conn = sqlite3.connect('python/movies.db')

# Write SQL query to find the names of people who starred in a movie with Kevin Bacon (born in 1958)
query_code = '''
    SELECT DISTINCT p.name
    FROM people p
    JOIN stars s1 ON p.id = s1.person_id
    JOIN movies m1 ON s1.movie_id = m1.id
    JOIN stars s2 ON m1.id = s2.movie_id
    JOIN people kb ON s2.person_id = kb.id
    WHERE kb.name = 'Kevin Bacon'
    AND kb.birth = 1958
    AND p.name != 'Kevin Bacon'
'''

# Execute the query and read the results into a DataFrame
result = pd.read_sql_query(query_code, conn)

# Close the database connection
conn.close()

# Display the resulting DataFrame with names of people who starred in a movie with Kevin Bacon
print(result)
