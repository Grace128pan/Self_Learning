def f(year, month):
    return year - 1 if month <= 2 else year

def g(month):
    return month + 13 if month <= 2 else month + 1

def calculate_N(year, month, day):
    N = 1461 * f(year, month) // 4 + 153 * g(month) // 5 + day
    return N

def main():
    print("Welcome to the elapsed days calculator!")
    print("Enter two dates to calculate the number of elapsed days between them.")

    year1 = int(input("Enter the year of the first date: "))
    month1 = int(input("Enter the month of the first date: "))
    day1 = int(input("Enter the day of the first date: "))

    year2 = int(input("Enter the year of the second date: "))
    month2 = int(input("Enter the month of the second date: "))
    day2 = int(input("Enter the day of the second date: "))

    N1 = calculate_N(year1, month1, day1)
    N2 = calculate_N(year2, month2, day2)

    elapsed_days = abs(N2 - N1)

    print(f"The number of elapsed days between {year1}-{month1}-{day1} and {year2}-{month2}-{day2} is {elapsed_days} days.")

if __name__ == "__main__":
    main()

#the last day not inclued,there are 198 days between 2004/8/8 and 2005/2/22
'''
The preceding formula is applicable for any dates after March 1, 1900 (1 must
be added to N for dates from March 1, 1800, to February 28, 1900, and 2
must be added for dates between March 1, 1700, and February 28, 1800).
'''