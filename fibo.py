# Oscar Saavedra
# CECS 342-07
# Prog 1 - Fibonacci Race
# September 13, 2022
#
# I certify that this program is my own original work. I did not copy any part of this program from
# any other source besides the professor. I further certify that I typed each and every line of code 
# in this program.

from datetime import datetime

# Fibo function
def fibo(n):
    if (n == 1 or n == 0):
        return 1
    else:
        return fibo(n - 1) + fibo(n - 2)
    
# Print start timestamp
now = datetime.now()
print("now = ", now)
print("type(now) = ", type(now))

# Calculate fibonacci numbers up to 50
for i in range(51):
    # Time before fibonacci function call
    before = datetime.now()
    f = fibo(i)
    # Time after fibonacci function call
    after = datetime.now()
    
    # Calculate difference in times
    diff = after - before
    delta = after - now
    # Print the results
    print(f'{i}: {f} \tTime since last num: {diff} \tTime since start: {delta}')
