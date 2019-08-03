#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[50],b[50];
    cin.getline(a,50);
    cin.getline(b,50);
    int n,n1,n2;
    n1=strlen(a);
    n2=strlen(b);
    n=(n1<n2)?n1:n2;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
            cout<<a[i];
    }
    return 0;
}
