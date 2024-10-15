"""
1.average value
write a program that prompts the user to enter numbers(float)
the program shows the average value of all entered numbers after each entry
1)we can do without lists
2)The program shows both the average value of the numbers and all the numbers entered
we exit program by entering "q"
3)The program does not show all the numbers entered but only top3 and bottom 3 and of course still average values
"""
# 1) average value without a list
def average_value():
    total_sum = 0
    count = 0
    
    while True:
        user_input = input("Enter a number or 'q' to quit: ")

        if user_input.lower() == "q":
            print("Exiting program.")
            break

        try:
            number = float(user_input)
            total_sum += number
            count += 1
            average = total_sum / count
            print(f"Average so far: {average}")
        except ValueError:
            print("Please enter a valid number or 'q' to quit.")
            
average_value()

# 2) average value with a list of all numbers
def average_with_list():
    numbers = []
    
    while True:
        input_number = input("Enter a number or 'q' to quit: ")
        
        if input_number.lower() == 'q':
            print("Exiting program.")
            break
        
        try:
            number = float(input_number)
            numbers.append(number)
            average = sum(numbers) /len(numbers)
            print(f"Average so far: {average}")
            print(f"All numbers entered: {numbers}")
        except ValueError:
            print("Please enter a valid number or 'q' to quit.")
            
average_with_list()

#average value +top3 and bottom3 numbers
def average_top_bottom():
    numbers = []
    
    while True:
        input_value = input("Enter a number or 'q' to quit: ")
        
        if input_value.lower() == 'q':
            print("Exiting program.")
            break
        
        try:
            number = float(input_value)
            numbers.append(number)
            average = sum(numbers)/len(numbers)
            
            sorted_numbers = sorted(numbers)
            
            top3 = sorted_numbers[:3] if len(sorted_numbers)>=3 else sorted_numbers
            bottom3 = sorted_numbers[-3:] if len(sorted_numbers) >=3 else sorted_numbers
            
            print(f"Average: {average}")
            print(f"Top3: {top3}")
            print(f"Bottom3: {bottom3}")
            
        except ValueError:
            print("Please enter a valid number or 'q' to quit.")
average_top_bottom()
            