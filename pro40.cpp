#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char a[]="dhoni",b[30];
    sort(a,a+5);
    cin.getline(b,30);
    if(strlen(b)!=5)
        cout<<"no";
    else
    {
        sort(b,b+5);
        if(!(strcmp(a,b)))
            cout<<"yes";
        else
            cout<<"no";
    }
    return 0;
}
