'''
Task:
Write a SQL query to list the titles of all movies with a release date on or after 2018, in alphabetical order.
Your query should output a table with a single column for the title of each movie.
Movies released in 2018 should be included, as should movies with release dates in the future.

results in a table with 1 column and 110,014 rows.
'''
import sqlite3
import pandas as pd

# Establish a connection to your database
conn = sqlite3.connect('python/movies.db')  # Replace 'your_database.db' with your database file path

# Write the SQL query
sql_query = """
SELECT title
FROM movies
WHERE year >= 2018
ORDER BY title;
"""

# Execute the query and read the results into a DataFrame
df = pd.read_sql_query(sql_query, conn)

# Display the DataFrame with movie titles
print(df)

# Close the database connection
conn.close()
