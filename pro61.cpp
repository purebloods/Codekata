#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[50],b[50];
    cin.getline(a,50);
    cin.getline(b,50);
    if(strlen(a)==strlen(b))
    {
        for(int i=0; i<strlen(a);i++)
        {
            int c;
            c=(((int)a[i]-96)+((int)b[i]-96));

            if(c>26)
                c-=26;
            c+=96;
            cout<<(char)c;
        }
    }
}
