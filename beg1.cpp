#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	int c,n;
	char a[50];
	n=strlen(a);
	cin.getline (a,50,' ');
	n=strlen(a);
	cin>>c;
	for (int i=0; a[i]!='\0';i++)
	{
		if (i>n-c-1)
		    cout<<a[i];
	}
	
}
