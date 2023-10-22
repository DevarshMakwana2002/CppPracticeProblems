def su(i):
    temp = sum(map(int,str(i)))
    return temp
for _ in range(int(input())):
    x,k = list(map(int,input().split(' ')))
    i = x
    while su(i)%k != 0:
        i = i + 1
    print(i)