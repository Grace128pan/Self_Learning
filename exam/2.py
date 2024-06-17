x = 5
y = x + 3
x = 10
print(y)

def func(val):
    val = val + 5
    return val

result = func(10)
print(result)

a = [1, 2, 3]
b = a
b.append(4)
print(a)

numbers = [1, 2, 3, 4, 5]
squares = [x**2 for x in numbers]
print(squares)