def memoize(func):
    memo = {}
    def helper(k):
        if k not in memo:
            memo[k] = func(k)
        return memo[k]
    return helper

def fib(k):
    if k <= 2:
        return k
    return fib(k-2) + fib(k-1)
fib = memoize(fib)

result = 0
i = 2
value = fib(2)
while value <= 4000000:
    if value%2==0:
        result += value
    i+=1
    value = fib(i)
print(result)