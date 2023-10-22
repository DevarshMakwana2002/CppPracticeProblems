def findmin(i,stri):
    if stri[i-1] == 1:
        for j in range(i,len(stri)):
            temp=stri[j-1]
            stri[j-1]=stri[j]
            stri[j]=temp
            if stri[j-1] == 0:
                return j
    else: return -1

for _ in range(int(input())):
    x = int(input())
    stri = list(map(int,reversed(str(input()))))
    for i in range(1,x):
        print(findmin(i,stri))
