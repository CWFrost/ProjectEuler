value = 600851475143

for i in range(2, value+1):
    while value%i==0:
        value = value / i
        if value==1:
            print(i)
            break