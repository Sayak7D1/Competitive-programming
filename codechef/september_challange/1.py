l=[]
a=[]
t=int(input())
for i in range(t):
    n=int(input())
    l=[int(x) for x in input().split()]
    if len(l)==n:
        l=list(dict.fromkeys(l))
        if 0 in l:
            l.remove(0)
        if len(l)==0:
            a.append(0)
        else:
            
            a.append(len(l))
        
for i in a:
    print(i)
        
    
    

    
    
