#include<iostream>
#include<string>
using namespace std;
int main()
{
	char a[50];
	int b;
	cin.getline(a,50,' ');
	cin>>b;
	for (int i=0; i<b; i++)
	{
		cout<<a<<"\n";
	}
}
