import random

# Generate a random number between 1 and 10
target_number = random.randint(1, 10)

# Initialize the number of tries
tries = 3

# Game loop
while tries > 0:
    # Prompt the user to guess the number
    guess = int(input("Guess the number between 1 and 10: "))
    
    # Check if the guess is correct
    if guess == target_number:
        print("You win!")
        break
    # If the guess is too high
    elif guess > target_number:
        print("Too high!")
    # If the guess is too low
    else:
        print("Too low!")
    
    # Decrement the number of tries
    tries -= 1

# If the user doesn't guess the number within 3 tries
if tries == 0:
    print("You ran out of tries. The number was:", target_number)
