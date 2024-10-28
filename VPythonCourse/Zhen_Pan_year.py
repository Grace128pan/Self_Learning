
def get_city_year(p0, perc, delta, p):
    year = 0
    while p0<p:
        new_population = p0 + p0 *perc /100 + delta
        year += 1
        
        if new_population <=p0 or(delta <0 and new_population <= 0):
            return -1
        
        p0 = new_population
    
    return year 


print(get_city_year(1000, 2, 50, 1200))
print(get_city_year(1000, 2, -50, 5000))
print(get_city_year(1500, 5, 100, 5000))
print(get_city_year(1500000, 2.5, 10000, 2000000))