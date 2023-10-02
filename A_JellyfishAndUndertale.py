for _ in range(int(input())):
    a,b,n = list(map(int,input().split(" ")))
    if(a > 0 and b > 0 and n > 0 and n<=100):
        arr = sorted(list(map(int,input().split(" "))))
        res = sum(list(map(lambda x: a-1 if x>a-1 else x,arr))) + b 
        print(res)
