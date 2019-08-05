#include<iostream>
using namespace std;
int main()
{
    int n,k1,temp;
    cin>>n>>k1;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }//khjvfuioichi
    for(int j=0;j<k1;j++)
    {
        temp=a[0];
        for(int i=0;i<n-1;i++)
            a[i]=a[i+1];
        a[n-1]= temp;
    }
     for(int i=0;i<n;i++)
    {
        if(i==0)
            cout<<a[i];
        else
            cout<<" "<<a[i];
    }

}
