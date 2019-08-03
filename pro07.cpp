#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float x;
    x=log(n)/log(2);
    cout<<n-pow(2,floor(x));
}
