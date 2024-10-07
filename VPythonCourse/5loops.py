# we can use codespace on main page to run this code using github
i = 0 # we will need some variable for changing things
while i <= 5:  # so loop while the statement to the left is True
    # notice the : indicates the start of while loop (just like if block previously)
    print("i <= 5", i <= 5)
    print("Hello No.", i)
    print("I can do more stuff here")
    # what happens if we forget the next line...
    i += 1 # same as  i = i + 1
# back to normal flow - loop is finished here
print("Always happens once loop is finished")
print("i is now", i)

i = 10 # instead of i we could use any variable
while i > 0:
    print("Going down the floor:", i)
    # i could do more stuff
    # we can make steps larger 
    i -= 2  # this is the same as writing i = i - 2
print("Whew we are done with this i:", i)

i = 2000
while True: # this is a normal construction, often used with break, so do something forever, but possible break out
    print("i is",i)  # so this line will be run at least once  no matter the condition under neath
    if i > 500:
        print("I want to break free!!! i is", i)
        break # break gets us to the next line after the loop
    i += 40  # same as i = i + 40
# the break takes us here
print("We are out of the loop finally and i is", i) 

i = 400
while True: # this is a normal construction, often used with break, so do something forever, but possible break out
    print("i is",i)  # so this line will be run at least once  no matter the condition under neath
    if i > 500:
        print("I want to break free!!! i is", i)
        break # break gets us to the next line after the loop
    i += 40  # same as i = i + 40
# the break takes us here
print("We are out of the loop finally and i is", i) 

# what we have above with while True and then break inside
# is a way of implementing do while loop in Python

# some languages have a native do while loop
# what I call "shoot first and ask questions later" loop
# where you run some code and then check for exit condition
i = 0
while True:
    print("i is", i)
    i += 1
    if i > 5:
        break
print("We are out of the loop finally and i is", i)
# turns while True: is often used in main loops of applications/games etc
# you want your application to run forever, unless user has pressed some certain keys
# or possibly some state in your application has changed

#continue is another keyword that can be used in loops
# it will skip the rest of the code in the loop and go to the next iteration
'''
while True:
    res = input("Enter number or q to quit ")
    if res == "q": # this could be made more flexible for user
        # it would be nice to allow Q or Quit or Exit as well
        print("No more calculations today")
        break  # we finally get out of the loop
    # elif res == "a": # TODO check if if the input is text
    #     print("I can't cube a letter a")
    #     continue # means we do with letter a but go back to begginging and ask for new input
    
    # try can be used alone without while, but is quite nice for handling user input
    # so think of try as if block which will jump to except part if there is an error
    # we do something within try block
    try: 
        print(f"Will try to conver {res} to number")
        num = float(res)
        # we could try multiple things
    except ValueError: # it is good practice to catch specific errors
            # https://docs.python.org/3/library/exceptions.html
        print(f"Ooops Value error, {res} no bueno, enter an integer or float please!")
        continue # so we go back to the beginnin because our num was unusable
    # if we get this far in our loop we know that number conversion must have worked
    cube = num**3
    cube = round(cube, 2)  # this rounds the num to 2 digits after comma(dot in English) instead of 2 i could use any other positive number
    # default for round is 0, that is the number is rounded to integer
    
    print(f"My calculator says cube of {num} is {cube}")

print("All done whew!")
'''
# nested while loops
x = 0

# outer loop starts
while x < 4:
    # you can leave empty space if it helps you
    y = 0  # depends on the task but we probably want to reset the inner loop iterator inside our outer loop
    print(f"Inside outer loop, x {x} and y {y}")
    while y < 3:
        print(f"Inside inner loop, x{x} and y {y}")
        print("x*y =", x*y)
        # we need to do something otherwise we might have an infinite loop right ?
        y += 1
    # out of inner loop
    x += 1
''' 
# game for two
while True:
    # handling exceptions https://docs.python.org/3/tutorial/errors.html#handling-exceptions
    try:
        secret = input("Player A enter number")
        secret = int(secret)
        print("This means integer was entered", secret)
        break # this break is only reached when secret was successfully converted
    except ValueError:
        print("not an integer! please try again")
        # so here continue is not required because we are still going back to the start
        # of while loop
    #     continue
    # print("This means integer was entered", secret) # of course in a game setting
    # # secret should not be shown on a screen :)
    # break # so this means we have made a valid secret that means we can break first loop

guess = None
num_guesses = 0

while guess != secret: # we keep playing as long as guess is not equal to secret
    guess = input("What is your guess Player B? (q to give up)")
    if guess == "q" or guess == "Q":  # there are other ways of doing this checking
        print("We give up")
        break
    guess = int(guess) # we convert AFTER checking for q
    num_guesses += 1 # our gusses counter
    if guess < secret:
        print("Your guess is less than secret")
    elif guess > secret:
        print("Your guess is more than secret")
# this is where the loop is already ended
print("So the secret number was", secret)
print(f"You took {num_guesses} tries")
# this code could always be improved, for example we could track the number of guesses
'''  

#for loop is another way of doing loops
# for loops
# notice we do not have to define n before this loop
for n in range(10): # what is range it is sort of like semi-ready sequence of numbers that generates numbers on demand
    # notice we start at 0 and go until 9 (not 10!)
    print("Number is", n)
    # also notice we do not have to write n += 1 here..

my_name = "Valdis" # string is a sequence of characters
print(f"Hello there {my_name}")
for c in my_name: # it could my_char , could be my_val whatever, we just chose to use c here
    print("Letter ", c) 
    print(f"Unicode of letter {c} is {ord(c)}")   
print("This happens after the loop is done")

for n in range(20,25): # we can specific start and end of the range, notice end of the range is actually end-1
    # in other works beggingin is inclusive
    # and end is exclusive (not included)
    print(n)

for my_num in range(100,110+1,2): # i can add step to range
    # so step represent how we are going to jump to the next number
    print(my_num)

# lets try negative -
for n in range(30,20, -3):
    print("n is ", n)
print("after exiting loop n is", n) # this is different from while loops where it would be 18 (not 21)

# limitation of standard range
# step has to be integer - positive or negative

# if you need step to be floating point
# then you can use either while loop,
# or you can use an external Python library such as numpy which does offer fractional range

start = 30
end = 20
step = -3
n = start
while n > end:
    print("n is ", n)
    n += step # n = n + step (here step could be negative that is fine)
print("n outside loop is", n)

# could iterate over any sequence, we will look at list in more depth later in course
my_list = [1,2,100,105,"Valdis","potatoes", 9000, 107.35] # list holds a collection of arbitrary data types
total = 0
big_items = 0
for item in my_list:
    print("Working with item: ", item)
    if type(item) == int or type(item) == float:
        total += item
        if item > 100:
            big_items += 1
print("Total price is", total)
print(f"We had {big_items} with price over 100")

print(sum(range(10)))

# Find maximum value in a list             
my_num_list = [1,6,17,9531,7,-6,49,642,6,2,-5555]

my_max = None
for num in my_num_list:
    if my_max == None: # this will happen with first item
        my_max = num
        print(f"Setting my_max to {my_max}")
    if num > my_max:
        my_max = num
print("After loop exits the max is found", my_max)
# Intermediate skill       
# Python has a built in max method so you could unroll your list
print(max(*my_num_list)) # * unrolls items in the list, so they match max function
# requirements, max requires multiple values entered separated by comma
print(max(5,1,9))

# you can put in break inside for loop
# just like while loop 
for n in range(10):
    print(n)
    if n > 5:
        print("Too much", n)
        break
print("outside n is", n)

# we can also use continue inside our for loop
for n in range(10):
    print(n)
    if n < 4:
        print("not ready yet", n)
        continue  # this goes to the start of loop
    # we could have done this with if else instead of continue
    print("big n", n)

# for loops might need a method of adding a index to some sequence member
for i,c in enumerate(my_name):  # by default i will start at 0, again i and c were my choices, you could use different names
    print(i, c)
    # after each loop is run, i,c values are reused for next loop

for n in range(20):
    if n % 2 == 0:
        print(n, "is even!")
    else:
        print(n, "is odd")
    
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

#we could add end="," to print everything in the same line, but it is not necessary
Fizz = 5
Buzz = 7
start = 1
end = 100

for num in range(start, end+1):
    if num % Fizz == 0 and num % Buzz == 0:
        print("FizzBuzz", end="")
    elif num % Fizz == 0:
        print("Fizz", end="")
    elif num % Buzz == 0:
        print("Buzz", end="")
    else:
        print(num, end="")
    
    if num < end:
        print(",", end=" ")

total = 0
i = 1
while i < 5:
    total += i
    i += 2
print(total)

result = 10

for n in range(4):

    result *= n

print(result)

m = 1
while True:
    if m%2 == 0:
        break
    m += 3
print(m)


i = 7
for c in "potatoes":
    if c <"i":
        print(c, end="")   #string comparison is done by comparing unicode values

all = 0
i = 0
while i < 10:
    if i % 2 == 0:
        i += 1
        continue   # Skip adding `i` to `all` when `i` is even
    all += i
    i += 1
print(all)   # 1 + 3 + 5 + 7 + 9 = 25