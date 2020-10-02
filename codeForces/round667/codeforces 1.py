l=[]
a=[]
t=int(input())
for i in range(t):
    l=[int(x) for x in input().split()]
    if len(l)==2:
        d=abs(l[0]-l[1])
        if d%10!=0:
            r=d//10+1
        else:
            r=d//10
        a.append(r)
for r in a:
    print(r)
