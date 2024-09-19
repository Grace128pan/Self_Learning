# Lesson 3 control flow learning
# thonny has a great debugger it is very useful to follow variable changes
name = "Valdius"
year = 2006
print(f"year is {year}")
year += 5
print(f"yeae is {year}")
year *= 10
print(f"year is {year}")

year = 2024
print(f"year is {year}")

# %20Flow%20Control.ipynb   %20 is    space Ascii code
print(type(True), type(False))
print(8 == 18 -10)
print(5 == "5")

# in Python, double quotes and single quotes are the same
# python lowercase and uppercase is not the same
print("hello" == "Hello")

a = 2
b = 4
print(a*a == b, a*a == 4, a*a == 5)

# google colab we can use to text part to have markdown level headings
print(a >=2, a < b, a <= b)
print(5!=5, 5!=6)
print(not True) 

print(len("Valdis") < len("fine"))  #ASCII comparison
# above is true because of Unicode represening those Emojis
print(ord("😀"), ord("😃"), ord("😁"))  #check union code number 

print(chr(4000))

is_hot = False
print(is_hot)
print(chr(128523))

#logical conjunction with and 
print(True and True)

#lazy evaluation
print(True and True and 2*2 == 4 and 2*2 == 5)

#logical disjunction with or
print(True or False)  #there is also lazy evaluation(when the first is true, then the result should be true, others will not be checked)

print(chr(65))  # the result will be A

a = 10
b = 20
c = a and b
print(c)

my_val = 20
if my_val > 5:
    print(f"{my_val} is larger than 5 ")
    
'''
#input is always string
age = input("Enter your age: ")
print("your age is", age)
print(float(age)) #convert string to float
'''

e = 20.36
print(round(e, 1))

'''
#elif comes from else if
x = int(input("Enter an integer please! "))
if x > 42:
    print("Too ambitious an answer!")
elif x < 42:
    print("You dream too little!")
else: # so x>42 was false, x<42 was false, this leave only x == 42
    print("That is the answer to everything!")
#These lines below will execute always
print('Your number is', x)
'''

#the order how you check matters
a = 5000
if a > 1000:
    print(f"A is truly big {a}")
elif a > 100:
    print(f"A is pretty big over 100 but not more than 1000 {a}")
elif a > 0:
    print(f"Well a is at least positive between 1 and 100 -> {a}")
elif a < 0:
    print(f"Looks like we got a negative here {a}")
else: # again only 0 remains as the value not covered by previous chain
    print(f"A must be zero! {a}")  

#match methods are new in Python 3.10(match--case)
number = 20
match number:
    case 0:
        print("Nothing")
    case 1:
        print("Just one")
    case 2:
        print("A couple")
    case -1:
        print("One less than nothing")
    case 1 - 1j:
        print("Good luck with that...")
    case _:  #default case
        print("Something else")
        
# python --version to check python version in vs code
for thing in [1, 2, 3, 4]:
    match thing:
        case 1:
            print("one")
        case 2:
            print("one, and two")
        case 3:
            print("one, two, and three")
        case 4:
            print("one, two, three and four")
        case _:
            print("something else")

#python matching is not widely used yet, but it is a new feature in Python 3.10
# next time we will learn loop