#include<iostream>
#include<string>
using namespace std;
int main()
{
	char a[30],b[30];
	cin.getline(a,30,' ');
	cin.getline(b,30,'\n');
	if(strcmp(a,"hello"))
		cout<<"world";
	else
	{
	for(int i=0;i<60;i++)
	{
		if(a[i]=='\0')
			{
			cout<<a;
			break;
			}
		if(b[i]=='\0')
			{
			cout<<b;
			break;
			}
	}
	}
}
