'''
1.Strings - Class Tasks
String Confusion
The user enters a name.
The user name is returned in reverse and begins with a capital also some extra text is added including the first letter of the user name
'''
reversed_input =input("Enter your name: ")[::-1].capitalize()
print(f"Hello {reversed_input}! Your name is {reversed_input[:4]}-tastic! What does it mean?")

'''
2. Write a program to recognize a text symbol
The user (first player) enters the text.
Only asterisks are output instead of letters. Suppose there are no numbers, but there may be spaces
The user (i.e. the other player) enters the symbol.
If the letter is found in the string, then the letter is displayed in the appropriate places, all 
other letters remain asterisks.
Potato field -> ****** *****
User enters o -> *o***o *****
In principle, this is a good start for the game of hangman (possible final project).
'''
