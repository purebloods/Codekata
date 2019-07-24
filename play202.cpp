#include<iostream>
using namespace std;
int main ()
{	char a[30];
	cin.getline(a,30);
	for(int i=0;a[i]!='\0';i++)
	{
		if( a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U' )
		       cout<<a[i];
	}
	for(int i=0;a[i]!='\0';i++)
	{
		if(!( a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U' ))
		       cout<<a[i];
	}
	
	
}
