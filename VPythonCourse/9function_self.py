# a function is a block of organized, reusable code that is used to perform a single ,related action

def order_food():
    print("I want a pizza")
    print("I am going to order food")

order_food()

# I can use my function as part of anohter of my own functions
def going_out():
    print("Let's go out!")
    order_food()
    print("Let's run!")
    order_food()

going_out()

#function with parameters or arguments
#function parameters are the names listed in the function's definition
#function arguments are the real values passed to the function

def place_order(dish):
    print("Hello Waiter!")
    print(f"I'd like to order {dish}")
    print(f"Let's eat {dish.upper()}!")

place_order("Potatoes")

#we could define some variables and use that as a function argument
dessert = "Ice Cream"
place_order(dessert)
place_order("MeatBalls")

#I could create a list of strings and pass each one in a loop to our function
dishes = ["Pizza", "Pasta", "Salad", "Soup"]
for dish in dishes:
    place_order(dish)
    
#create a function that takes a list
def order_food_from_list(food_list):
    print(f"Let's order a bunch of food from this list {food_list}")
    for food in food_list:
        place_order(food)
    print("I think I am really stuffed!")
 # importantly innner function food will not survive outside order_food_from_list function
 
 
order_food_from_list(["Kebab", "Burger", "Fries", "Coke"])
order_food_from_list(dishes)

#python does not check what type of arguments I am passing as data
order_food_from_list("Potatoes salad")
#Instead we could have passed a list of one item
order_food_from_list(["Potatoes salad"])
order_food_from_list([])

#multiple parameters
def add(a, b):
    result = a + b
    print(f"Adding {a} and {b} gives {result}")
    print(result)


add(2, 3)
add(9, 233)
add("Hello ", "World")
add([1,2,7], list(range(6, 12)))

#returning results/values from functions
my_saved_result = add(10, 35)
print("my saved result: ", my_saved_result)
# Turns out that Python functions return None by default if you do not specify return

def mult(a, b):
    result = a * b
    print(f"Look! I am multiplying {a} and {b} and the result is {result}")
    return result


mult(5, 9)
add(5, 9)

t1 = mult(5, 9)
t2 = add(5, 9)

#chaining function
#If function returns something we can use to return value for another function, even the same function
big_result = mult(mult(5, 9), 3)
big_result = mult(mult(5, 9), mult(3, 2))
print(big_result)

print(dishes)
print("soup" in dishes)


food_list =["beet soup", " salad", "meat and potatoes", "Ice cream"]
def find_needle(needle, my_list):
    for item in my_list:
        if needle in item:
            print(f"Found {needle} in {item}")
            return item

my_soup = find_needle("soup", food_list)
print(my_soup)  # if soup is not found, we get none as the result output

#modify the original list
def add_food(food, mylist):
    mylist.append(food)  # Append the original food
    mylist.append("Strawberries")  # Append "Strawberries" to the original list
    return mylist  # Return the modified original list


food_list = ["beet soup", "salad", "meat and potatoes", "Ice cream"]
dessert = "Ice Cream"
add_food(dessert, food_list)

print(food_list)  # ['beet soup', 'salad', 'meat and potatoes', 'Ice cream', 'Ice Cream', 'Strawberries']


def add_food1(food, mylist):
    new_list = mylist.copy()  # Create a copy of the original list to avoid modifying it
    new_list.append(food)  # Append the original food
    new_list.append("Strawberries")  # Append "Strawberries" to the new list
    return new_list  # Return the new list without modifying the original


food_list = ["beet soup", "salad", "meat and potatoes", "Ice cream"]
dessert = "Ice Cream"
new_menu = add_food1(dessert, food_list)

print(food_list)  # Original list remains unchanged: ['beet soup', 'salad', 'meat and potatoes', 'Ice cream']
print(new_menu)  # New list: ['beet soup', 'salad', 'meat and potatoes', 'Ice cream', 'Ice Cream', 'Strawberries']

alias_for_my_list = add_food("Pizza", food_list)
print(alias_for_my_list)

#default values in function parameters 
# i can make all values default
# so this means I do not have to specify all values when calling function
def make_cocktail(soda="tomato juice", alcohol="Vodka", mixer="Glass"):
    print(f"Mixing {soda} with {alcohol} in a {mixer}")
    return f"{soda}X{alcohol}"


make_cocktail("coke", "rum", "shaker") # this is normal function call
make_cocktail("tonic", "gin") # i can be lazy i can use glass as default, here I skip last value which will be default
make_cocktail() # all values are default
make_cocktail(alcohol="Grappa") # so I can skip some default values

# so I could keep the old functionality - thus not breaking previous code
# and add options to do something else
# here I add option to debug/print intermediate results
def sub(a, b, debug_mode=False):
    if debug_mode:
        print(f"Debugging {a} - {b} should be {a-b}")
    return(a-b)
sub(20, 3)


sub(30,5, True)
# Even better would be to pass the name of argument
# this is especially important when we have boolean flags
# again Python is not checking whether that is a boolean
sub(40, 7, debug_mode=True)

#avoid using global inside functions
result = 100
print(result)

def add_result(a, b, result):
    result += a+b # same result = result + (a+b)
    # many calculations
    print(result)
    return result

# I could overwrite the old result with new one
result = add_result(5,10, result)
print(result)

def add3(a,b,c):
    print(a+b+c)
    return(a+b+c)
add3(13,26,864)

#function names serve as a way of self-documenting code
print(add3(list(range(5,10)), [1,3,6], [5,'VVVV']))

result = add3("A","BRACA","DABRA")
print(result)

#Docstrings
#Docstrings are strings that appear right after the function definition and are used to document the function
def is_prime(num, debug=False):
    '''
    Super simple method of checking for prime. 
    '''
    for n in range(2,num): #How could we optimize this?
        if num % n == 0:
            if debug:
                print(f'{num} is not prime, it divides by {n}')
            return False
    else: # runs when no divisors found
        if debug:
            print(f'{num} is prime')
        return True
print(is_prime(53))  #  I can now hover over my function and see description and help
print(is_prime(51))
print(is_prime(59, debug=True))

def is_prime_optimized(num):
    '''
    Faster method of checking for prime. 
    Only checks values for up to square root of number plus 1
    '''
    if num % 2 == 0 and num > 2: 
        return False
    for i in range(3, int(num**0.5) + 1, 2): ## notice we only care about odd numbers  and do not need to check past sqrt of num
        if num % i == 0:
            return False
    return True


is_prime_optimized(23)  #should return true