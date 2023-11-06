functioncalls=0

def ackermann(m,n):
    global functioncalls
    functioncalls+=1
    if m==0:
        return n+1
    elif m>0 and n==0:
        return ackermann(m-1,1)
    elif m>0 and n>0:
        return ackermann(m-1,ackermann(m,n-1))
        
m=n=1
for i in range(1,50):
    print("Ackermann[",m,",",n,"] is ",ackermann(m,n)," ; Function calls: ",functioncalls)
    n+=1;

functioncalls=0
m=n=1
for i in range(1,50):
    print("Ackermann[",m,",",n,"] is ",ackermann(m,n)," ; Function calls: ",functioncalls)
    m+=1;
