from datetime import datetime

def fibo(n):
    if (n == 1 or n == 0):
        return 1
    else:
        return fibo(n - 1) + fibo(n - 2)
    
now = datetime.now()

print("now = ", now)
print("type(now) = ", type(now))

for i in range(51):
    before = datetime.now()
    f = fibo(i)
    after = datetime.now()
    diff = after - before
    delta = after - now
    print(f'{i}: {f} \tTime since last num: {diff} \tTime since start: {delta}')
