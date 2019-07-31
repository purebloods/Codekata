
f=0
n=(int) (input(" "))
for x in range(2,((int)(n/2))):
    if (n%x==0):
        f=f+1
        break
if(f==0):
    print("yes")
else:
    print("no")
