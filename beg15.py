x=(int) (input(''))
y=(int) (input(''))
m=0
for i in range(x+1,y):
    if (i%2==0):
        if(m==0):
            print(i,end='')
            m=m+1;
        else:
            print (" ",i,end='')
        
