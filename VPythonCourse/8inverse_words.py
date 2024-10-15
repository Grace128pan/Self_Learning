'''
Inverse words
The user enters a sentence
we output all sentence words in reverse form
Ice cream -> ecI maerc
ps:split() and join operations could be useful
'''
string_input = str(input("Enter a sentence: "))
split_string = string_input.split()
reverse_string =[i[::-1] for i in split_string]
joined_string = " ".join(reverse_string)
print(joined_string)

"""
prime numbers
this could be a weekend assignment, there is hardly enough time in class
find and output the first 20(even better option is to choose how many first primes we want) prime numbers in the form of a list 
such as [2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71]
"""

n = int(input("Enter the number of prime numbers you want: "))

primes = []

candidate = 2

while len(primes) < n:
    is_prime = True
    for p in range(2, int(candidate**0.5) + 1):
        if candidate % p == 0:
            is_prime = False
            break
    if is_prime:
        primes.append(candidate)
    candidate += 1

print(primes)
#This is a smart and efficient way of solving the problem