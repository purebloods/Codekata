n=(int)(input())
p=5
for x in range(1,n+1):
    p=p*x;
    if(x==n):
        print(p)
    else:
        print(p,end=' ')
    p=5;
    
