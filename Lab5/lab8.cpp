#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string a[100];
	string b;
	int c=0;
	do
	{
		cin>>b;
		c++;
	}while (b != "done");
	cout<<c-1<<endl;
}	