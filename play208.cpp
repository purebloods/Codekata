#include<iostream>
using namespace std;
int main()
{
    int n,s1=0,s2=0,p;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                s1+=a[i][j];
            else if (i==n-1-j)
                s2+=a[i][j];
        }
    }
    cout<<s1*s2;
}
