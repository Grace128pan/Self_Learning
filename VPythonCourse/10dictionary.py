#dictionary 
'''
Collection of Key - Value pairs
also known as associative array
also known as map, hashmap
unordered
keys unique in one dictionary
storing, extracting
'''
student = {("name", "alice"), ("age", 20),("grade", "A")}

#dictionaries are mutable
student1 = {"name": "alice", "age": 20, "grade": "A"}
print(student)
print(student1)

emptyd = {} # most common way of creating a new dictionary
print(len(emptyd))
print(type(emptyd))

also_dict = dict()  # alternative way of making a blank dictionary
print(also_dict)  # when we print we see curly braces, that strongly implies a dictionary (although sets also use {})

tel = {'jack': 4098, 'sape': 4139} # so  { key: value, key2:value2, and so on}
print(tel)

# so what can be keys ? what happens if we add second identical key
tel = {'jack': 4098, 'sape': 4139, 'jack': 9000} # you generally should not do this, keys should be unique
print(tel)

# & C:/Users/grace/AppData/Local/Programs/Python/Python312/python.exe c:/Users/grace/VisualStudioProject/Self_Learning/VPythonCourse/10dictionary.py

# add a new key-value pair
tel['guido'] = 4127
print(tel.keys())
print(tel.values())

tel['valdis'] = [9000,2640,2911]  # I can store a list of numbers as value in my dictionary against some specific key
print(tel)

tel_list = [['jack',9000], ['valdis',9000]]
print(tel_list)  # 2D list  checking for specific entry will be slow unless I know the index

new_dict_from_tel_list = dict(tel_list)  # so i can pass a 2d list type of structure with 2 entries and create a new dictionary
print(new_dict_from_tel_list)




