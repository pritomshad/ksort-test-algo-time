import random

# Function to generate and write random numbers to a file
def generate_and_write_random_numbers(filename, count, lower_limit, upper_limit):
    with open(filename, 'w') as file:
        file.write(str(count) + '\n' + "5" + '\n');
        for _ in range(count):
            random_number = random.randint(lower_limit, upper_limit)
            file.write(str(random_number) + '\n')

# Example usage
filename = 'input.txt'
count = random.randint(10000, 100000)  # You can change this to the desired number of random numbers
print("Sample Size: "+ str(count))
lower_limit = 1
upper_limit = 10000  # You can change this to set the range of random numbers

generate_and_write_random_numbers(filename, count, lower_limit, upper_limit)
