import math

def factorial(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial(n - 1)

def count_arrangements(g, y, r):
    total_balls = g + y + r

    
    # Calculate permutations
    total_permutations = factorial(total_balls) // (factorial(g) * factorial(y) * factorial(r))
    
    return total_permutations

print(count_arrangements(1, 1, 0))  
print(count_arrangements(1, 1, 1))