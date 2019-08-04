#include<iostream>
#include<cmath>
using namespace std;
int prime(int n)
{
    if(n==1 || n==0)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
      {
          if(n%i==0)
            return 0;
      }
    return 1;

}
int main()
{
    int l,r,m=0;
    cin>>l>>r;
    for(int i=l+1;i<r;i++)
    {
        if(prime(i) && m==0)
        {
            cout<<i;
            m++;
        }
        else if(prime(i))
            cout<<" " <<i;
    }
}
