#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t;
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(int i=0; i<(n/2);i++)
    {
        if(i==0)
            cout<<a[0]<<" "<<a[n-1];
        else
            cout<<" "<<a[i]<<" "<<a[n-i-1];
    }
    return 0;
}

