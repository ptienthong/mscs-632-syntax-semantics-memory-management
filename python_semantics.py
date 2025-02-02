#!/usr/bin/env python3

# Compute the factorial of a number using recursion
def factortialOf(number):
    if number == 0 or number == 1:
        return 1
    else:
        return number * factortialOf(number - 1)

# Compute the factorial of a number using closure
def factorialClosure():
    def factorial(number):
        if number == 0 or number == 1:
            return 1
        else:
            return number * factorial(number - 1)
    return factorial

if __name__ == '__main__':
    fact = factorialClosure()

    number = 0
    result = factortialOf(5)
    print(f'Factorial of {number} is {result}')

    number = 5
    result = factortialOf(number)
    print(f'Factorial of {number} is {result}')

    number = 10
    result = factortialOf(number)
    print(f'Factorial of {number} is {result}')

    number = 15
    result = factortialOf(number)
    print(f'Factorial of {number} is {result}')

    # Using closure
    print(f'[Closure] Factorial of {number} is {fact(number)}')