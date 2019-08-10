n=(int)(input())
p=5
if(n==0):
    print(0)
else:
    for x in range(1,n+1):
        p=p*x;
        if(x==n):
            print(p)
        else:
            print(p,end=' ')
        p=5;
