#include<iostream>
#include<cmath>
using namespace std;
int prime(int n)
{
    for(int i=2; i<sqrt(n); i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int a,b;
    cin>>a>>b;
    if(prime(a) && prime(b))
        cout<<"yes";
    else
        cout<<"no";
}
