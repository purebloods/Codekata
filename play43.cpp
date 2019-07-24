#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	char a[30],b[30];
	int c,d;
	cin.getline(a,30,' ');
	cin.getline(b,30,'\n');
	c= strlen(a);
	d= strlen(b);
	for(int i=c; i<c+d; i++)
	       a[i]=b[i-c];
	a[c+d]='\0';
    cout<<a;
	return 0;
	
}
