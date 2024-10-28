def build_name_pyramid(name, height):
    # Repeat the name to match the required height if necessary
    name_length = len(name)
    
    for i in range(height):
        # Calculate the number of letters to print in this row
        current_letter = name[i % name_length]  # Cycle through the name
        num_letters = 2 * i + 1  # Number of letters in the current row
        spaces = height - i - 1  # Calculate leading spaces
        
        # Build the pyramid row
        row = ' ' * spaces + current_letter * num_letters
        print(row)

def main():
    # Get user input for height and name
    while True:
        try:
            height = int(input("Enter the height of the pyramid (1-40): "))
            if 1 <= height <= 40:
                break
            else:
                print("Height must be between 1 and 40. Please try again.")
        except ValueError:
            print("Invalid input. Please enter a number.")

    name = input("Enter your name: ")
    
    print("\nYour pyramid:")
    build_name_pyramid(name, height)

if __name__ == "__main__":
    main()
