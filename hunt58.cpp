#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,k,coun=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(a[i]-a[j])==k)
                coun++;
        }
    }
    cout<<coun;
}
