n = int(input())

i = 1
factorial = 1

while i <= n:
    factorial = i * factorial
    i = i + 1
    
print("The factorial of the given number is:",factorial)
