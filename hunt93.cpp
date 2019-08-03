
#include<cstring>
#include<ctype.h>
#include<iostream>
using namespace std;
int main()
{
    char a[30],f=0;
    cin.getline(a,30);
    int n;
    n=strlen(a);
    for(int i=0;i<n;i++)
    {
        if(a[i]==' ')
        {
            f++;
        }
        if(((i%2)==0) && ((f%2)==0))
           {

            a[i]=toupper(a[i]);
       //     cout<<a[i]<<" ";
            }
        if(((i%2)!=0) && ((f%2)!=0))
            a[i]=toupper(a[i]);
    }
    cout<<a;
    return 0;

}

