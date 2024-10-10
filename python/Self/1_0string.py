#python for everyone: chapter2: concepts of strings in python
'''
1. strings contain sequence of character data. String is an array of characters.
2. strings are immutable. Once a string is created, it cannot be changed.
we will learn
1)dynamic input from the keyboard
2)command line arguments
3)string properties
4)string methods
5)string formatting
6)triple quotes
3. string literals can be enclosed with double quotes or single quotes
4. string literals can span multiple lines using triple quotes ''' ''' or """ """
5. using [ ] operator, we can access individual characters in a string
6. zero based index is used in python
7. we will raise an error if the index is out of bounds for the string
8. eval() function usage will be discussed
9. sys.argv[], get.opt(), argparse() will be discussed to read python common line arguments
'''
#my_age = input("Enter your age: ")
#print(type(my_age))
#input() function always returns a string. We need to convert it to the required type if necessary

#we can handle the exception using try and except block
"""
try:
    num1 =input("Enter the first number: ")
    num2 =input("Enter the second number: ")

    add = int(num1) + int(num2)
    substract = int(num1) - int(num2)
    divide = int(num1) / int(num2)
    multiply = int(num1) * int(num2)
    average = (int(num1) + int(num2))/2.0 
    remainder = int(num1) % int(num2)

    print(f"Sum of {num1} and {num2} is {add}")
    print(f"Difference of {num1} and {num2} is {substract}")
    print(f"Division of {num1} and {num2} is {divide}")
    print(f"multiplication of {num1} and {num2} is {multiply}")
    print(f"Average of {num1} and {num2} is {average}")
    print(f"Remainder of {num1} and {num2} is {remainder}")
except ValueError:
    print("Please enter a valid number.")
"""

#the eval function evalutes a specified expression, if the expression is a legal python statement, it will be executed
#eval(expression, globals=None, locals=None)
#expression: a string to be parsed and evaluated as python code
#global: a dictionary containing global parameters
#locals: a dictionary containing local parameters
print(eval("'pyth' +'on'"))
print(eval("'python ' *3"))
print(eval('3+5*(6-3)-12'))
print(eval("True == False"))
print(eval("3**2"))
print(eval('2*(2+1) - 3'))
print(eval('"python".upper()'))
print(eval('"PYTHON".lower()'))
x = 3
print(eval("x*(x-1)*(x+2)"))

#if there is a requirement to give the input before the start of the script, then we use the command line arguments
#command line arguments are arguments passed at the time of execution
#python sys.argv[] is used to read the command line arguments, zero-index based
#it is a simple way to read command line arguments as String
#argv is not an array, but a list that represents all the items that come via command input
#usually the separator between the comman line argumetns is space. If there is space itself in the command line argument, then
#it should be enclosed within quotes only
import sys
# print(sys.argv[1]) #here, python python/self/1string.py hello could give me the hello in the output
#if we give python python/self/1string.py "hello I love you", then the output will be hello I love you
#if we give command line arguments, then the sys.argv[0] will be the name of the script itself
# if we give python python/self/1string.py "hello" "I" "love" "you", then the output will be hello
# print(sys.argv[1] + sys.argv[2])   #if input is 5 6, then the output will be 56(consider as string concatenation)
print(int(sys.argv[1]) + int(sys.argv[2]))  #if input is 5 6, then the output will be 11(consider as integer addition)
#ValueError: if we need to convert a string to an integer, then the string should be a valid integer
#IndexError: if we are trying to access an index which is out of bounds