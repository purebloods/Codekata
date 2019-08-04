#include<iostream>
using namespace std;
int main()
{
    int n,f=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==0)
                {
                    cout<<a[i]<<" "<<a[j];
                    f++;
                    break;
                }

        }if(f>=1) break;
    }
    return 0;
}
