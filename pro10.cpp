#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int a[n];
    for (int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=1;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(a[i]>a[j])
                sum+=a[j];
        }

    }
    cout<<sum;
}
