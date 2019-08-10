n=(int)(input());
a=0;
x=n;


while n!=0:
    r=(n%10);
    a=a+(r*r*r);
    n=(int)(n/10);
if(a==x):
    print("yes")
else:
   print("no")
