#python3.13.0 updated, minor changes  python.org to access it 
# Lists and Tuples

#lists
#Ordered
#Mutable(can change individual members!) unlike characters in strings
#Dynamic size - can change the size of the list itself, unlike strings which are fixed
#Comma separated between brackets [1,3,2,5,6,2]
#Can have duplicates
#Can be nested - can have list inside list and so on
#Can use same syntax for slicing and indexing as in strings
# in other words it is a generic container for whatever you want to store in computer memory
groceries=['Bread','Eggs','Milk'] # define my list and I will store 3 strings inside
print(groceries)
print(type(groceries))

emptylist = [] # often used to initialize before storing things inside a list
# name emptylist could be any valid variable name
print(len(emptylist))

# checking for existance
# if we have many items in a list this will take so called O(n) time
# meaning if we have million items Python will have to check every single one
# there is another structure for this which is more efficient
print('Bread' in groceries)  #check existance of an item in a list

food = "My breadsticks" # compare with string membership
print("bread" in food) #true
print("bread" in groceries) # case sensitive
print(" bread " in food) #good for exact match

# we can call a list conversion a a string (or other sequence types)
# remember we had int, float, bool and str conversion
name_list = list("Valdis")
print(name_list) #the result would be a list of characters

print(list(food))  #we can convert a string to a list of characters using list() function
print(list(str(42)))

try:
    print(list(str(42))) # this will throw an error
except Exception as e:
    print(e)

#list indexing
print(groceries[0]) # Bread

#negative indexing
name_list = list("Valdis")
print(name_list[-1]) # s
print(str(name_list))
print("".join(name_list)) # we can join list of characters into a string
print(":|:".join(name_list))
grocery_string = "🛒🛍️✨".join(groceries) # we can join list of strings into a string
print(grocery_string)

# so range is actually a lazy factory for numbers
# in computer programming lazy is usually more efficient than eager(meaning runs immediately)
# we need to call list to convert this force this lazy factory actually run the numbers
numbers = list(range(12)) # so this will have numbers from 0 to 11
print(numbers)

#slicing lists
print(numbers[2:5]) # 2,3,4
print(numbers[5:7])  # so item with index 7 (8th item) is NOT included

reversed_numbers = numbers[::-1] # so we can reverse a list by using -1 step
print(reversed_numbers)

print(numbers[1::2])

print(sum(numbers))  #string can not be summed

#try sum groceries
# print(sum(groceries)) # this will throw an error  # sum starts with 0 and tries to add stirng to it
print(f"Even number sum from list {numbers} is {sum(numbers[::2])}")

#average of a list
avg = sum(numbers)/len(numbers)
print(avg)

print(min(numbers), max(numbers))

# here I create a copy of a lista
list_copy=list(groceries)
print(list_copy, id(list_copy), id(groceries)) 
# so memory address of these two lists is different! this means they have their own lives now

# here I just point another variable at the SAME list, just a reference/shortcut
glist2=groceries # this is just an alias
print(id(glist2),id(groceries),id(list_copy), sep = "\n")
groceries[2] = "Chocolate"  # so the original list will change any any references to this original list
print(groceries, glist2, list_copy,sep = "\n")

glist2[1] = "Beer"
print(groceries, glist2, list_copy,sep = "\n")

list_copy[0] = "Potatoes"
print(groceries, glist2, list_copy,sep="\n")

print(list_copy == groceries) # this check for contents not the actualy memory
print(groceries is list_copy) # this checks if they are the same object in memory

list_3 = ['Potatoes', 'Eggs', 'Milk']
print(list_3 == list_copy, list_3 is list_copy)
# thus contents are same, but these are different lists
# so think of two shopping carts with same type of items in them

## there are two other ways of copying
another_copy = list_3.copy() # same result as list(list_3)
yet_another_copy = list_3[:] # so slicing a list produces a copy
print(list_3, id(list_3))
print(another_copy, id(another_copy))
print(yet_another_copy, id(yet_another_copy))
# so here we have same contents but three different lists in memory

#append or add sth to lists
print(glist2)

try:
    glist2[500] = "Candy" # so this will throw an error because we do not have 4th element
except Exception as e:
    print(e)

#in place addition
glist2.append("Candy") # so this will add Candy to the end of the list
print(glist2)  #add to the end of the list

#out of place addition
new_list = glist2 + ["Chips"] # so this will create a new list with Chips added to the end
print(new_list)
new_list.pop() # so this will remove the last element from the list
print(new_list)

my_list = [11,12,13,14,15]
my_list.pop()
result = my_list.pop()
my_list.append(16) 
print(my_list, result)

my_list2 = [1, 20, 10,-5,-10]

new_list = sorted(my_list2) # so this will create a new sorted list ascending: [-10,-5,1,10,20]

result = new_list[:4:2]
print(result)

my_list3 = [n*n for n in range(1,12) if n % 3 == 0]
print(my_list3)

list_a = [1,2,10,20]

list_b = [2,3,10,15]

result2 = max(sum(list_a), sum(list_b))
print(result2)

my_tuple = 750, "words", "challenge", 2020

a, b, c, d = my_tuple # so this is called tuple unpacking

a, b, c, d = d, c, b, a # so we can swap values in Python with tuple unpacking
print(c)

print(dir(glist2))

glist2.clear()  # again IN PLACE operation meaning modifies the contents wherever the variable points at
print(glist2)

glist2.append("Tea") # append is for single items
print(glist2.extend(["Coffee","Sugar"])) # extend is for multiple items
print(glist2)

glist2.append(["Milk","Bread"]) # so this will add a list as a single item
print(glist2)
glist2.pop()
print(glist2)

glist2.reverse() # IN PLACE operation
print(glist2)

reversed_list = glist2[::-1] # OUT OF PLACE operation
print(reversed_list)

# Lists can take any number of data types
mylist3 = [1,2,5, "Valdis", ["Bread", "milk", 3, 6, 2.77, [3, "wo'w"]], ["anotherlist", 2,3], "just sometext"]
print(mylist3)

numbers_list = list(range(0,51,3))
print(numbers_list)
# Python 3.x range is an improved Python 2.x xrange!

numbers_list.sort() # will sort the numbers IN PLACE in ASCENDING ORDER
print(numbers_list)
letters = sorted("Valdis") # so this will sort the letters in the string
print(letters) #capital letters come before lowercase letters as they have different ASCII codes

sorted_list = sorted(numbers_list) # OUT OF PLACE returns new list sorted in ASCENDING
# there is also a reverse flag
print(sorted_list)
print(sorted_list.count(12), numbers_list.count(12)) # so we have 2 in each list

sorted_list.insert(1, "Booo!") # so inserts at the exact place and shifts rest up
print(sorted_list)
# this can take a while to move the whole list, so insert is less efficient than append
# so inserting things at the begginning of a list is not as efficient as appending at the end

sorted_list.remove("Booo!") # removes exact first match
print(sorted_list)

#loop through lists
for item in sorted_list:
    print(item, sep=",", end=" ")

# less frequently we might need an index then we use enumarate
print(glist2)
for index,item in enumerate(glist2): # we could start at a different numbering as well
    print(index, item)
    print(f"Item no. {index} is {item} same as {glist2[index]}") # last approach is not needed

# let's go through our numbers list and create squares of this list
squares = []  # so we start with a new blank list
for n in range(12):
    new_square = n**2
    print(f"Squaring {n} into {new_square}")
    squares.append(new_square)  # or n*n # and we keep adding for each number in our original numbers list we create a square
    # you could do it without a temporary variable
    # squares.append(n**2)  # or n*n # and we keep adding for each number in our original numbers list we create a square
print("My squares are", squares)

#list comprehensions
squares2 = [n**2 for n in range(12)] # so this is the same as the loop above
print("My squares are", squares2)

even_squares = [n**2 for n in numbers if n%2 == 0] # we only takes squares of even numbers
print(even_squares)

# you could do the same thing with regular loop and ifs
even_squares_2 = []
for n in numbers:
    if n%2 == 0:
        even_squares_2.append(n**2)
# same code as list comprehension but more writing
print(even_squares_2)

#looking for a specific item in a list
groceries = ['Bread', 'Eggs', 'Milk', 'Chocolate', 'Sugar', 'Coffee', 'Tea', 'rye bread', 'brown bread', 'white bread', 'chocolate bread']
print(groceries.index("Milk")) # so this will return the index of the first match
#try to find items including bread in the list
found_list =[item for item in groceries if "bread" in item.lower()]
print(found_list)

#another way of finding items in loop count way
found_list = []
for item in groceries:
    if "bread" in item.lower():
        found_list.append(item)
print(found_list)

#tuples
#Immutable(can not change individual members!)   count and index methods
#Dynamic size - can not change the size of the tuple itself
#Comma separated between parentheses (1,3,2,5,6,2) or comma separated without parentheses 1,3,2,5,6,2
#immutable lists
#Can have duplicates
#Can be nested - can have tuple inside tuple and so on

#Philosophy speaking:
#tuples are for heterogenous data - meaning different types
#lists are for homogenous data - same types(numbers, strings etc)
#This rule is not a guideline not a strict one
number_tuples = tuple(range(5,18))  # notice the round regular parenthesis (not square brackets used by list!)
print(number_tuples)

#pack and unpack tuples
my_tuple = 1,2,3,4,5 # so this is a tuple
print(my_tuple)

a = 5
b = 9
mini_tuple = a, b # we pack values inside our tuple
print(mini_tuple)

# i can also unpack a tuple
c, d = mini_tuple # so unpacking I do need to pay attention to size of tuple 
print(c, d)

# combining packing and unpacking we can use it to exchange values
# in many languages you would have to use a temporary 3rd variable
print(a, b)
a, b = b, a # without this trick we would need a 3rd temporary variable
print(a, b)

# One last thing on tuples, the values inside can be mutated but not changed
# if we have something with IN PLACE methods inside tuple we can use those
my_tuple = (5, "Valdis", [1,2,3], (5,6,7)) 
print(my_tuple)

needle = "late"
for item in glist2:
    if needle in item:
        print(f"Found {needle} in {item}!")
    else:
        print(f"Sorry no {needle} in {item}..")

# List example
fruits = ['apple', 'banana', 'apple', 'orange', 'banana', 'apple']
apple_count = fruits.count('apple')
banana_count = fruits.count('banana')

print(f"Number of 'apple': {apple_count}")
print(f"Number of 'banana': {banana_count}")

# Tuple example
numbers = (1, 2, 3, 4, 3, 2, 3, 1, 2)
three_count = numbers.count(3)
two_count = numbers.count(2)

print(f"Number of 3: {three_count}")
print(f"Number of 2: {two_count}")

