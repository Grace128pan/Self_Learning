"""
cube table
the user enters the beginning(integer) and end number
the output is the entered numbers and their cubes
For example: inputs 2 and 5(two inputs)
output:
in 2 cubes: 8
3 in a cube: 27
4 in a cube: 64
5 in a cube: 125
all cubes: [8, 27, 64, 125]
PS could be done theoretically without a list, but with a list will be more convenient
"""
input_beginning = int(input("Enter the beginning number: "))
input_end = int(input("Enter the end number: "))
numbers = []

if input_beginning > input_end:
    input_beginning, input_end = input_end, input_beginning
    for i in range(input_beginning, input_end + 1):
        numbers.append(i ** 3)
        print(f"{i} in a cube: {i ** 3}")
elif input_beginning < input_end:
    for i in range(input_beginning, input_end + 1):
        numbers.append(i ** 3)
        print(f"{i} in a cube: {i ** 3}")
else:
    print("The beginning and end numbers should not be the same")

