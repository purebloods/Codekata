#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[30];
    int f=0;
    cin.getline(a,30);
    for(int i=0;a[i]!='\0';i++)
    {
        switch(a[i])
        {
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '0':
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E': f++;
                      break;
            default: f--;

        }
    }
    if(f!=strlen(a))
        cout<<"no";
    else
        cout<<"yes";
}
