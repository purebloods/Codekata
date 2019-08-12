#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,maxi,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    maxi=a[0];
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            for(int k=i;k<=i+j-1;k++)
            {
                sum+=a[k];
            }
            maxi= max(maxi,sum);
            sum=0;
        }

    }
    cout<<maxi;
}
