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
