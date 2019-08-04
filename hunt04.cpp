#include<iostream>
using namespace std;
int main()
{
    int n,f=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                f++;
                cout<<a[i];
                break;
            }
        }
        if(f>0) break;

    }
    if(f==0)
        cout<<"unique";
    return 0;
}
