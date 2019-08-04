#include<iostream>
#include<cmath>
using namespace std;
int jumpno (int n)
{
    int a[10],f=0,r,i=0;
    if(n==2)
        return 1;
    else if (n>=10)
    {
        while(n!=0)
        {
            r=n%10;
            if(r==2)
              {
                  return 1;
              }
            n/=10;
        }
    }
     return 0;
}
int main()
{
    int n,coun=0;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(jumpno(i))
            coun++;
    }
    if(n>=22)
        cout<<coun+1;
    else
        cout<<coun;
    return 0;
}
