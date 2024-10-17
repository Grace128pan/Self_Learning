#function should include return result, otherwise it will return None
# function that returns item that contains needle somewhere in it
food_list = ['apple', 'banana', 'orange', 'pear', 'grape', 'beet needle']
# so we make a function to return first item that contains our needle from our list
def find_needle(needle, mylist):
    for item in mylist:
        if needle in item:
            print(f"Eureka! Found {needle} in {item}")
            return item # so this fun will return first found item which contains needle
    # notice we have return inside if statement so it is not guaranteed
    # what happens if we go through the list and find nothing?


find_needle('needle', food_list)
mygarlic = find_needle('garlic', food_list)
print(mygarlic) # this will print None because we did not return anything in the function

#mutating arguments
#sometimes it is useful to change the argument in the function
#this is called mutating the argument
#list or dictionary are mutable, so we can change them in the function
#since we are modifying the original list, we do not need to return it
def remove_item(item, mylist):
    mylist.remove(item)
    print(f"Removed {item} from list")
    print(mylist)

remove_item('banana', food_list)