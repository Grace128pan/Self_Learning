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
'''
player1 = input("Enter a text: ")

filtered_text = "".join(char for char in player1 if char.isalpha() or char.isspace())    

player2 = input("Enter a symbol: ")

for i in range(len(filtered_text)):
    if player2.isalpha() and len(player2) == 1:
        result = ""
    
        for char in filtered_text:
            if char == player2:
                result += char
            elif char == " ":
                result +=" "
            else:
                result += "*"
        print(result)
    else:
        print("Enter a single letter")
'''

def is_valid_text(text):
    # Check if the text contains only alphabetic characters and spaces
    for char in text:
        if not (char.isalpha() or char == " "):
            return False
    return True

def display_hidden_text(text, guessed_letters):
    hidden_text = ""
    for char in text:
        # Check if the lowercase of the character is in guessed letters
        if char.lower() in guessed_letters:
            hidden_text += char  # Preserve the original case
        elif char == " ":
            hidden_text += " "
        else:
            hidden_text += "*"
    return hidden_text

def all_letters_guessed(text, guessed_letters):
    # Check if all alphabetic letters in the text have been guessed
    for char in text:
        if char.isalpha() and char.lower() not in guessed_letters:
            return False
    return True

# First player enters the text
while True:
    text = input("Enter a text (only alphabetic characters and spaces are allowed): ")
    if is_valid_text(text):
        break  # Text is valid, exit the loop
    else:
        print("Invalid text! Please use only alphabetic characters and spaces.")

# Initialize guessed letters as an empty set
guessed_letters = set()

# Display the initial hidden text
print(display_hidden_text(text, guessed_letters))

# Set the maximum number of guesses to 2 * the length of the text
max_guesses = 2 * len(text)
remaining_guesses = max_guesses

# Second player starts guessing
while remaining_guesses > 0:
    print(f"Remaining guesses: {remaining_guesses}")
    
    guess = input("Enter a letter (or 'exit' to quit): ").lower()
    
    if guess == "exit":
        print("Game over! You exited the game.")
        break
    # Ensure the input is valid (a single alphabet letter)
    elif len(guess) != 1 or not guess.isalpha():
        print("Invalid input! Please enter a single letter.")
        continue
    else:
        # Add the valid guess to the guessed letters set (in lowercase)
        guessed_letters.add(guess)
        # Display the updated hidden text
        print(display_hidden_text(text, guessed_letters))
        # Check if all letters have been guessed
        if all_letters_guessed(text, guessed_letters):
            print("Congratulations! You've guessed the entire text!")
            break
        # Decrease the remaining guesses
        remaining_guesses -= 1

# Final message when guesses run out
if remaining_guesses == 0:
    print("Out of guesses! Game over!")


