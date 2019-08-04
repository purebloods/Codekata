#include<iostream>
using namespace std;
int main()
{
    int n,k;
    float sum=0,r;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=(a[i]/2.0);
    }
    cin>>r;
    if(r==sum)
        cout<<a[k]/2.0;
    else
        cout<<"Bon Appetit";
    return 0;


}
