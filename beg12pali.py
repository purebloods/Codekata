n=(int)(input());
a=0;
x=n;


while n!=0:
    r=(n%10);
    a=(a*10)+r;
    n=(int)(n/10);
if(a==x):
    print("yes")
else:
   print("no")
