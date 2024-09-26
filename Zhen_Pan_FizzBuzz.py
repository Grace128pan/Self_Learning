### Practice 
### Write a program that goes over(iterates) numbers from 1 to 100(included)
# For each number it prints Fizz if number divides by 5 even
# For each number it prints Buzz if number divides by 7 evenly
#  If number divides by 5 AND 7 print FizzBuzz
# print number if it does not divide by 5 nor 7
# 1,2,3,4,Fizz,6,Buzz,8,9,Fizz,11,.......34,FizzBuzz,36
for i in range(1, 101):
    if i % 5 == 0 and i % 7 == 0:
        print("FizzBuzz")
    elif i % 5 == 0:
        print("Fizz")
    elif i % 7 == 0:
        print("Buzz")
    else:
        print(i)
