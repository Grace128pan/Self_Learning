# practical work1-temperature checker 1
user_input = int(input("Enter your temperature: "))
if user_input <35:
    print("a bit too cold!")
elif 35 <= user_input <=37:
    print("You are all right!")
else:
    print("Possible fever!")

# practical work2-holiday bonus
monthly_salary = float(input("Enter your monthly salary: "))
years_service = float(input("Enter your years of service: "))
if years_service > 2.0:
    bonus_years = years_service - 2
    result = bonus_years * monthly_salary * 0.15
    print(f"Your bonus is {result}.")
else:
    print("No bonus for you!")

# practical work3-order the numbers
number1 = int(input("Enter the first number: "))
number2 = int(input("Enter the second number: "))
number3 = int(input("Enter the third number: "))
if number1 < number2 < number3:
    print(number1, number2, number3)
elif number1 <number3 <number2:
    print(number1, number3, number2)
elif number2 <number1 <number3:
    print(number2, number1, number3)
elif number2 <number3 <number1:
    print(number2, number3, number1)
elif number3 <number1 <number2:
    print(number3, number1, number2)
else:
    print(number3, number2, number1)
  