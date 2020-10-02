t=int(input())
for i in range(t):
    l=[int(x) for x in input().split()]
    if len(l)==3:
        if l[0]>l[1]*l[2] or(l[1]==1 and l[0]!=1):
            print("-1")
        else:
            count=1
            for count in range(1,l[0]+1):
                if count<=l[1]:
                    r=count
                elif count%l[1]==0:
                    r=l[1]
                else:
                    r=count%l[1]
                print(r,end=" ")
                count+=1
                
            print("")

