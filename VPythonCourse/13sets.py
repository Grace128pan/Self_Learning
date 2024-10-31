#sets and Object-oriented programming
# unordered collection of something
# uniques only - great for getting unique items out of some collection
# curly braces {3, 6, 7} - we used {} for dictionaries as well, dictionaries used : for key:value
s = {3,3,6,1,3,6,7} # so curly braces are also used for a set not only a dictionary
print(s)

# set do not have index, we can loop through them
for i in s:
    print(i)


nset = set((3,3,6,1,3,6,7)) # alternative is to use set which takes any iterable
print(nset)

#list, tuple, string, dictionary, set - all are iterable

character_set = set("abracadbra") # since string is an iterable this is allowed
print(character_set)

a = set("ķiļķēni un klimpas") # takes a sequence so string qualifies
print(a)

b = {"abracadbra","abba", "dubba", "abba",56,7,2,12,2,2,1,1}
print(b)

bset = set(["abracadbra","abba", "dubba", "abba"])
print(bset)

aset = set("abracadbra")
print(aset)

for c in aset: # notice no guarantee on order, we can loop through the sets 
    print(c)
    
# major usage of sets
#membership testing in sets 
# If i wanted guarantee I would convert set to sorted list and use that to loop through
for c in sorted(aset):
    print(c)

mylist = sorted(aset) # sorted gives you a list
print(mylist)

print("|".join(sorted(a))) # you can join with any character even blank space
# notice that sorting is using Unicode chr values so Latvian letters are after English
# TODO sort it locale specific way

#set is the easy way to remove duplicates from a list
shopping_list = ["milk", "bread", "butter", "milk", "bread", "butter", "milk", "bread", "butter"]
print(list(sorted(set(shopping_list))))   # set will remove duplicates and then we convert it back to list and sort it

#set operations
#set algebras: union, intersection, difference, symmetric difference, subset, superset

#let's create a set of numbers by using range
number_set = set(range(1,10))
print(number_set)

#give subset usage
even_numbers = set(range(2,10,2))
print(even_numbers)

#check issubset
print(even_numbers.issubset(number_set))
#check issuperset
print(number_set.issuperset(even_numbers))

print(even_numbers <= number_set) # <= is a subset operator
print(number_set > even_numbers) # >= is a superset operator, strict subset and superset operators are < and >

#we can remove elements from a set
number_set.remove(5)
print(number_set)

#use try except block to remove an element that does not exist
try:
    number_set.remove(5)
except KeyError as e:
    print("Element 5 does not exist in the set")
    

#let's do union operations of two sets
odd_numbers = set(range(1,10,2))
print(odd_numbers)
print(odd_numbers.union(even_numbers)) # union of two sets

#let's do intersection of two sets
print(odd_numbers.intersection(even_numbers)) # intersection of two sets

#let's do difference of two sets
print(odd_numbers.difference(even_numbers)) # difference of two sets

#let's do symmetric difference of two sets
print(odd_numbers.symmetric_difference(even_numbers)) # symmetric difference of two sets

#syntax sugar for union, intersection, difference, symmetric difference are |(bar), &(ampersand), -(hyphen), ^(circumflex) respectively
#give examples of using syntax sugar
print(odd_numbers | even_numbers) # union of two sets
print(odd_numbers & even_numbers) # intersection of two sets
print(odd_numbers - even_numbers) # difference of two sets
print(odd_numbers ^ even_numbers) # symmetric difference of two sets: the opposite of intersection

#update a set with another set
odd_numbers.update(even_numbers)
print(odd_numbers)
#check if there is anything in common between two sets
print(odd_numbers.isdisjoint(even_numbers)) # if there is nothing in common then True

# we can update with many differnt data types
s.update({3,3,6,2,7,9},range(4,15), [3,6,7,"Valdis", "Badac"])
print(s) # so no order guaranteeed

print(dir(s)) # we can see all the methods available for a set

result = sorted(tuple(set("alus") - set("akas")))
print(result)

result = set([1,2,3]) | set([2,3,4,5]) 
print(result)

result = set([1,2,3]) & set([2,3,4,5])
print(result)

#LET'S CHECK OUT TYPES OF SOME PRIMITIVE DATA TYPES
print(type(3))
print(type(3.0))
print(type("Valdis"))
print(type([1,2,3]))
print(type((1,2,3)))
print(type({1,2,3}))
print(type({"key":"value"}))
print(type(True))
print(type(None))
print(type(range(10)))
print(type(range(1,10)))
print(type(range(1,10,2)))

#give a super simple class that does nothing
class MyClass:
    pass

#we can create a class blueprint which is a blank sheet of paper

simple_object = MyClass() # we can create an object from a class
print(simple_object)

simple_object.some_property = 100 # we can add properties to an object

#let's use class to make a house with 8 windows and no basement
class SimpleHouse:
    windows = 8
    basement = False
    
    #print properties of the house, this is methods in a class, methods are functions that live inside objects
    #self refers to the specific object that is calling the method
    def about(self):
        print(f"This house has {self.windows} windows and basement is {self.basement}")
        


first_simple_house = SimpleHouse() # create an object from a class
first_simple_house.about() # call a method on an object
first_simple_house.windows = 10
first_simple_house.basement = True
first_simple_house.about()

class House:
    windows = 8
    basement = False
    # we could have moved the above two properties to constructor
    # there is a special method called once upon creation of an object
    # it is called a constructor method
    # it is handy to do some initialization tasks
    # so we use a predefined name __init__ for method so that will be called automatically
    # WARNING for default sequence types use empty tuple (not empty list)
    def __init__(self, name="", color="Red", nails=0, stories=2, inhabitants = ()): # i entered some default values so not to break the code
        print("Construction time again!")
        self.color = color
        self.nails = nails
        self.stories = stories
        self.name = name
        self.inhabitants = list(inhabitants)  # we want a list because we will want to mutate possibly 
        print("Construction finished, object ready to go! Let's build a house named", name)
        print(self) # this should call __str__ function now

    # so __str__ should return some sort of string
    def __str__(self):
        # we redefine __str__ method which is used by print among others
        return f"""House name: {self.name} 
        color:{self.color} nails:{self.nails}
        stories:{self.stories} windows:{self.windows} basement:{self.basement}
        inhabitants: {self.inhabitants}"""  # multi line string

    # methods are functions defined inside class blueprint
    def print_stats(self): # class methods require self, in many other languages it is called this 
        # so self returns to the concrete object calling this method
        print(f"You got {self.windows} windows!")
        print(f"You have a basement? - {self.basement}")
        #print(self)
        return self # this is cool we return ourselves so we can keep chaining our methods

    def add_nails(self, new_nails=1):
        print(f"Old nail count {self.nails}")
        self.nails += new_nails # same as self.nails = self.nails + new_nails
        print(f"NEW nail count {self.nails}")
        return self # we return ourselves so we can keep chaining our calls

    def add_inhabitant(self, new_member):
        print(f"Adding new member {new_member} to {self.inhabitants}")
        self.inhabitants.append(new_member) # self.inhabitants is a list so we can use in place append
        print(f"Now house {self.name} has {self.inhabitants}")
        return self

    def some_calc(self, a, b):
        print(a*b+100)
        return a*b+100

#we can override the default values for the House class
my_house = House("Grace Residence", "Blue", 100, 3, ["Valdis", "Badac", "Maija"])
another_house = House() # new object
homer_house = House(color="yellow", nails=20)
burns_house = House(name="Mr. Burn's house", color="white", nails=1_000_000, stories=3)
simpsons_house = House(name="Simpson's", color="yellow", inhabitants=("Bart","Lisa","Maggie","Homer","Marge"))

print(simpsons_house) # this should call __str__ function now

#__str__ is a special method that is called when we try to print an object and __init__ is called when we create an object

simpsons_house.add_inhabitant("Grandpa").add_inhabitant("Santa's Little Helper").add_nails(100)
print(simpsons_house)

class Laundry:
    def __init__(self, laundry_items):
        self.clean = []
        self.__dirty = []
        for item in laundry_items:
            if item > 9000:
                self.__dirty.append(item)
            else:
                self.clean.append(item)
    def showDirty(self):
        print(self.__dirty) # so inside still works
    def __str__(self):
        return f"Got {len(self.clean)} clean items and {len(self.__dirty)} dirty items"

mylaundry = Laundry([3,6,9666,6999,69000,65,2])
print(mylaundry)
#mylaundry.__dirty # this will not work because __dirty is a private variable

print(mylaundry.clean)
mylaundry.showDirty() # so accesing private data via methods is idea behind data hiding

# idea behind inheritance is to use already existing class template
# and a few things on top of it as a new template
class Jeans(Laundry):
    def __init__(self,jean_dirt_list, jean_brand_list):
        print("Initializing Jeans")
        # first we call our parent Class constructor with super
        super().__init__(jean_dirt_list)
        self.brands = jean_brand_list
    def myTwoFavorites(self):
        print(self.brands[:2])

myjeans = Jeans([3,6,7,90000,36666], ["Lees", "Levis", "Montana"])
print(myjeans)

myjeans.myTwoFavorites()

#composition, alternatively approach to inheritance, composing a class from other classes
#let's make a car that uses engine and wheels, have power and fuel, include all these methods, engine, wheel and car class created
class Engine:
    def __init__(self, power):
        self.power = power
    def __str__(self):
        return f"Engine with {self.power} power"
    def start(self):
        print("Engine started")
    def stop(self):
        print("Engine stopped")
        
class Wheel:
    def __init__(self, size):
        self.size = size
    def __str__(self):
        return f"Wheel with {self.size} size"
    def rotate(self):
        print("Wheel rotating")
    def stop(self):
        print("Wheel stopped")
        
class Car:
    def __init__(self, engine, wheels, fuel):
        self.engine = engine
        self.wheels = wheels
        self.fuel = fuel
    def __str__(self):
        return f"Car with {self.engine} and {self.wheels} and {self.fuel} fuel"
    def start(self):
        self.engine.start()
        for wheel in self.wheels:
            wheel.rotate()
    def stop(self):
        self.engine.stop()
        for wheel in self.wheels:
            wheel.stop()

myengine = Engine(100)
mywheel1 = Wheel(15)
mywheel2 = Wheel(15)
    
class Engine:
    def __init__(self, power):
        self.power = power

    def __str__(self):
        return f"Engine with {self.power} power"

    def start(self):
        print("Engine started")

    def stop(self):
        print("Engine stopped")

class Wheel:
    def __init__(self, size):
        self.size = size

    def __str__(self):
        return f"Wheel with {self.size} size"

    def rotate(self):
        print("Wheel rotating")

    def stop(self):
        print("Wheel stopped")

class Car:
    def __init__(self, engine, wheels, fuel):
        self.engine = engine
        self.wheels = wheels
        self.fuel = fuel

    def __str__(self):
        return f"Car with {self.engine} and {len(self.wheels)} wheels of size {self.wheels[0].size} and {self.fuel} fuel"

    def start(self):
        self.engine.start()
        for wheel in self.wheels:
            wheel.rotate()

    def stop(self):
        self.engine.stop()
        for wheel in self.wheels:
            wheel.stop()

# Create engine and wheels
myengine = Engine(100)
mywheel1 = Wheel(15)
mywheel2 = Wheel(15)
mywheel3 = Wheel(15)
mywheel4 = Wheel(15)

# Create a list of wheels and initialize the car
mywheels = [mywheel1, mywheel2, mywheel3, mywheel4]
mycar = Car(myengine, mywheels, "gasoline")

# Start and stop the car
print(mycar)
mycar.start()
mycar.stop()

# you'll need four wheels in total for the Car class. Here’s the adjusted version with four wheels:
#next week, we will get to know python libraries 

        


    
