
def build_name_pyramid(name, height):
    
    name_length = len(name)
    
    for i in range(height):
        current_letter = name [i % name_length]
        num_letters = 2 * i + 1
        spaces = height - i - 1
        
        row = ' ' * spaces + current_letter * num_letters
        print(row)
        

def main():
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
    
    print("\n My name pyramid:")
    build_name_pyramid(name, height)
    
if __name__ == "__main__":
    main()

