from math import ceil

multiples_five = ceil(1000/5)
multiples_three = ceil(1000/3)
multiples_fifteen = ceil(1000/15)
result = 0
subtract = 0
    
for i in range(1,multiples_five):
    result += 5*i
for i in range(1,multiples_three):
    result += 3*i
for i in range(1, multiples_fifteen):
    subtract += 15*i
print(result-subtract)

#Brute force to check solution
result2 = 0
for i in range (1,1000):
    if i%5==0 and i%3==0:
        result2 += i
    elif i%5==0:
        result2 += i
    elif i%3==0:
        result2 += i
print(result2)

