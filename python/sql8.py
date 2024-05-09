"""
Task:
Write a SQL query to list the names of all people who starred in Toy Story.
Your query should output a table with a single column for the name of each person.
You may assume that there is only one movie in the database with the title Toy Story.

results in a table with 1 column and 4 rows.
"""

import sqlite3
import pandas as pd

# Connect to the SQLite database
conn = sqlite3.connect("python/movies.db")

# Define the SQL query to retrieve names of people who starred in "Toy Story"
query = """
    SELECT p.name
    FROM people p
    JOIN stars s ON p.id = s.person_id
    JOIN movies m ON s.movie_id = m.id
    WHERE m.title = 'Toy Story'
"""

# Execute the SQL query and load the result into a DataFrame using pandas
df = pd.read_sql_query(query, conn)

# Display the DataFrame containing the names of people who starred in "Toy Story"
print(df)

# Close the connection to the database
conn.close()
