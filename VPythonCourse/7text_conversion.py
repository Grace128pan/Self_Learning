'''
write a program for text conversion
save user input
print the entered text without changes
exception: if the words in the input are "not ....bad" then print "good"
for example:
the weather is not bad -> the weather is good
car is not new -> car is not new
This cottage cheese is not so bad -> This cottage cheese is good
Find(or index, or even rfind) will probably come in handy, as may as in operator. also slice syntax will be useful
'''

def convert_text(text):
    # Look for the 'not' and 'bad' keywords in the text
    not_index = text.find('not')
    bad_index = text.find('bad')

    # If 'not' comes before 'bad', replace the whole "not ... bad" section with "good"
    if not_index != -1 and bad_index != -1 and not_index < bad_index:
        # Create a new string with the "not ... bad" part replaced by "good"
        return text[:not_index] + "good" + text[bad_index + 3:]
    
    # If the condition isn't met, return the text unchanged
    return text

# User input
user_input = input("Enter a sentence: ")

# Print the converted text
print(convert_text(user_input))

#This is a simple and genius way of solving the problem. The code is clean and easy to understand.