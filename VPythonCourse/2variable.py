# cd C:\    cd temp  python.\hello.py    python --version (old way of running python)
# thonny.org to download python editor
print("Hello Humanities!")
# varibales, data types, arthimetic operations
name = "valdis"  # a string variable
print(name)
print("why hello there", name)  #string literals
# by default, comma is using a single space as a separator
print("How are you doing", name, sep="...😊...")

university = "RTU"
print("So", name, "you are teaching at", university, "?")
#since python 3.6, we can use f-strings
print(f"So {name}, you are teaching at {university}, are you not?")

name = "Dr. Smith"
university = "Harvard University"

my_question = f"So {name}, you are teaching at {university}, are you not?"
print(my_question)

year = 2024  #integer variables
year_string = "2024" #string variable
next_year = 2025
next_year_string = "2025"
years_added = year + next_year
print(years_added)

years_strings_added = year_string + next_year_string
print(years_strings_added)  #string concatenation
#snake case is widely used in python
#variable names should be descriptive
#javascript will not complain integers or strings addition
#we can not add two incompatible data types in python for addition
#we can add two strings, but not a string and an integer

#look at some basic data types
#primitive: string, integer, float, boolean(true or false), None, complex numbers, bytes
# float+integer = float
my_pie = 3.1415926
print(f"{my_pie} is going to be cooked")
my_result = my_pie + next_year    #semantically correct
print(my_result)

it_is_raining = False
it_is_hot = True
print(it_is_raining, it_is_hot)
#python recent versions added extra syntax for f-strings for debugging
print(f"for deubgging, this is nice {it_is_hot=}")   #python 3.8 and later
captain_nemo =None
print(captain_nemo)

print("2*2 is", 2*2)
#operators: +, -, *, /, //, %, **, +=, -=, *=, /=, //=, %=, **=
a = 9
print(a, a/2, a//2)  # a//2 is integer division
print(a, a%2)  # a%2 is modulo operator, we get the remainder
print("Remainder of 9/2 is", 9%2)
print("Remainder of 20/7 is", 20%7)

#complex numbers
my_complex = 5 + 2j  #j represents the imaginary unit, the square root of -1, we can do math with this
my_complex_number_squared = my_complex**2     #25+4j^2+20j = 25-4+20j = 21+20j
print(my_complex_number_squared)

#type(my_data) is to check the data type of a variable
print(type(my_complex_number_squared))
print("data type of a is", type(a))

age = 100
age += 100
print(age)

print("beer"*3)
print(int(6.7)+round(4.6)+10.3)

name = 9000
print(name, type(name))

a=5
b=10
a+=12
c=a+b
print(c)
print(type("food"))
print("food " *3)

food = "spam 📧🐷🚫 "
print(food * 3)
print(10**100)

#it is easy to make sth string
number_str = str(name)
print(number_str, type(number_str))
number_int = int(number_str)
print(number_int, type(number_int))
alabama_pi = int(my_pie)
print(alabama_pi, type(alabama_pi))   #int rounds down
california_pi = float(my_pie)
print(california_pi, type(california_pi))  #float is more precise
round_pie = round(my_pie, 4)
print(round_pie, type(round_pie))  #round is rounding to the nearest number
print(round(3.5), round(4.5))  #round is rounding to the nearest even number
print(round(0.5), round(1.5), round(2.5), round(3.5), round(4.5))  #round is rounding to the nearest even number

#six functions: float, integer, string, round, type, print
#sometimes rounding can be surprising
# https://docs.python.org/3/library/functions.html#round