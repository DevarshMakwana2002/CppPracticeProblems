for _ in range(int(input())):
    n,k = list(map(int,input().split(" ")))
    stri = list(map(str,input()))
    numA = 0
    numB = 0
    num = 0
    for i in stri:
        if i == "A":
            numA += 1
        else:
            numB += 1
    def replaceAtoB():
        j=0
        while stri[j] != "A" or j<=n:
            j+=1
        return j
    def replaceBtoA():
        j=0
        while stri[j] != "B" or j<=n:
            j+=1
        return j
    if numB > k:
        num = replaceBtoA()
    elif numB < k:
        replaceAtoB()
    else: 
        num=0
    for i in range(len(stri)):
        if numA == 0:
            break