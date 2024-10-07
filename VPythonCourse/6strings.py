#highly recommend installing git on your computer: https://git-scm.com/
#clone repisoitory: git clone
print("Hello Grace")
# python --version(need to install if not have it)
# system environment=> advanced => environment variables => path => new => python path
# python --version
# git --version
# select python interpreter   find where python is installed =>select python.exe
# python -m venv venv
# How to syn with git and how to run other files in vs code
city = "Ogre "
#clean_city ="Ogre"
clean_city = city.rstrip()
print(clean_city)

my_text = "burkānmaize"
print(my_text[2:9:2])

my_text = "baltie krekli"
print(my_text.capitalize())
print(my_text.title())

#strings
# built in Unicode Support
myfriend = "Jānis"
mycat = "Ņauva"
myemojis = "Smiley 😊"
print(myfriend, mycat, myemojis)
#immutable
#Unicode support

name = "Valdis"
print(name)
print(len(name))
name = "Voldemars"
print(len(name))
print(len("name"))
print(name[0:3])

try:
    print(f"Character 7 in {name} is {name[7]}")
except IndexError as e:
    print(e)
    print(f"Index 7 is out of bounds for {name}")

# so if you wanted to find how many digits your number has you could just convert it to str
# and then use len
my_number = 555_123_4368  #underscore is for readability
my_str_from_number = str(my_number)
print(my_number, my_str_from_number, len(my_str_from_number))

my_text = "bezdelīga"
print(my_text[-4:])    

my_text = "Alise runāja runāja runāja"

new_text =my_text.replace("runāja", "dziedāja", 2)
print(new_text)
# we want "Alise dziedāja dziedāja runāja"

#string slicing
# [start:stop:step]
print(name[-3])
print(name[-3:])
print(name[-3:-1])
print(name[:])

alphabet = "abcdefghijklmnopqrstuvwxyz"
print(f"alphabet has {len(alphabet)} characters")

#let's get every second character
print(alphabet[::2])

#let's start with second character and get every second character
print(alphabet[1::2])

#we will not get index error if we slice out of bounds
print(alphabet[1:100])  #we get everything in bounds
print(alphabet[10:3000])  #we start at k and go to the end
print(alphabet[-1000:])

#pythonic way of reversing a string
print(alphabet[::-1])  #we start at the end and go to the beginning using -1 step
print(alphabet[-3:-10:-2])

try:
    name[3]="b"
except TypeError as e:
    print(e)
    print("Strings are immutable")

newname = name[:3] + "b" + name[4:]
print(newname)

new_name = f"{name[:3]}bxb{name[4:]}"
print(newname)

cat_name = "Winnie"
my_other_cat = f"My cat is called {cat_name}"
print(my_other_cat)

#multiline strings
newlines = "This is line 1\nThis is line 2\nThis is line 3"
print(newlines)

quote = "Alice said \"I am late!\""
print(quote)

quote2 = 'Alice said "I am late!"'
print(quote2)

# for multistrings you can put whater inside as long as it is not """ :)

multi_string = """Really
Long
And
Boring
    With Taba and maybe 'quote something' and even use double quotes "for talking" and so on \"\"\"
String"""
print(multi_string)

# there are also raw strings without escaping
raw_string = r"Alice \n not a new line"
print(raw_string)

# we can even use multi-line strings with f - strings to add some values inside
a = 5
year = 2023
my_big_string = f"""Oh this is nice {year}
the number is {a} which cubed is {a**3}
    also my name is {name}
and I can write some more"""

print(my_big_string)

print(f"Valdius {5}")

#string methods
myfood = "iCe cREam"
print(myfood.capitalize())
print(myfood.lower().count("c"))

#I could save the capitalized version as a new version
myfood = myfood.capitalize()
print(myfood)
my_string ="bbbb"
#let's count"bb" in my_string
print(my_string.count("bb")) #there should be a problem, 2 but not three, omit overlapping
#this is non-overlapping count

# use in method
print("bb" in my_string)

if "bb" in my_string:
    print("Found bb")
else:
    print("Did not find bb")
    
#let's find index of letter in strings
print(my_string.index("b"))  #we get the first index
# we can specify start and stop
print(my_string.index("b", 1))  #we get the second index

#find method is safer than index, find gives us -1 if not found
print(my_string.find("b"))

haystack = "beer " * 5
print(f"my haystack is {haystack}")
needle = "eer"
n = -1
while True:
    n = haystack.find(needle, n+1)
    if n == -1:
        break
    print(f"Found {needle} at index {n}")

#loop strings
for letter in my_string:
    print(letter)

#show examples of strip usage
my_string = "   bbb  "
print(my_string.strip())

#replace method can be useful
my_string = "I like apples"
print(my_string.replace("apples", "oranges"))

#let's replace beer with milk
haystack = "beer " * 5
new_haystack = haystack.replace("beer", "milk")
print(f"new haystack is {new_haystack}")

#let's just replace first instance beer with whiskey
new_haystack = haystack.replace("beer", "whiskey", 1)
print(f"new haystack is {new_haystack}")

#next time we will learn list and list methods