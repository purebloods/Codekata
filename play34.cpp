#include<iostream>
using namespace std;
int main()
{
	char a[30];
	cin.getline(a,30,'\n');
	for(int i=0; a[i]!='\0';i+=3)
	  cout<<a[i];
	
}

