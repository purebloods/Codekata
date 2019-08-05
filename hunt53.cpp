#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[30];
    cin.getline(a,30,' ');
    int k,n,r,m=0;
    cin>>k;
    n=strlen(a);
    for(int i=0;i<n-k+1;i++)
    {
        for(int j=i+1,r=0;r<k;r++)
        {

                cout<<a[i+r];
        }
        if(i!=n-k)
        cout<<" ";
    }
}
