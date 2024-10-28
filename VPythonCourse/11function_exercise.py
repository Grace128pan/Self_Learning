# In a small town the population is p0 = 1000 at the beginning of a year. The population regularly increases by 2 percent per year and moreover 50 new inhabitants per year come to live in the town. How many years does the town need to see its population greater or equal to p = 1200 inhabitants?
# we would test several different occasions using function such as
# get_city_year (1000, 2, -50, 5000) -> -1 # relatively current problem
# get_city_year (1500, 5, 100, 5000) -> 15
# get_city_year (1500000, 2.5, 10000, 2,000,000) -> 10

def get_city_year(p0, perc, delta, p):
    year = 0
    while p0 < p:
        new_population = p0 + p0 * perc / 100 + delta
        year += 1
        
        # Check if population becomes stagnant or falls below zero
        if new_population <= p0 or (delta < 0 and new_population <= 0):
            return -1
        
        p0 = new_population  # Update p0 for the next iteration

    return year

print(get_city_year(1000, 2, 50, 1200))       
print(get_city_year(1000, 2, -50, 5000))      
print(get_city_year(1500, 5, 100, 5000))      
print(get_city_year(1500000, 2.5, 10000, 2000000)) 

