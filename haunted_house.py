def zeroPosition(lst,i):
    for j in range(i,len(lst)):
        if lst[j] == 0:
            return j
    return -1

def isDevisable(lst,j):
    for i in range(j):
        if lst[i] == 1:
            zero = zeroPosition(lst,i) 
            return False,i,zero
    return True,0,0

def findMinExchange(lst,i):
    isDevi,num,zero = isDevisable(lst,i)
    result = 0
    if isDevi:
        return lst,0
    else:
        for _ in range(num,zero):
            for j in range(num,zero):
                temp = lst[j]
                lst[j] = lst[j+1]
                lst[j+1] = temp
                if lst[j] == 0:
                    result += 1
                if lst[num] == 0:
                    return lst,result
    return lst,-1

for _ in range(int(input())):
    ans = []
    n = int(input())
    lst = list(map(int,input()))[::-1]
    result = 0
    for i in range(1,n+1):
        lst,result = findMinExchange(lst,i)
        if len(ans) and result != -1:
            ans.append(result+ans[len(ans)-1])
        else:
            ans.append(result)
    print(" ".join(list(map(str,ans))))