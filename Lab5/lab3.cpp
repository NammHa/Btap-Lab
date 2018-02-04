#include <iostream>
using namespace std;
int main()
{
	float a,b;
	b = 0;
	do
	{
		cin>>a;
		b = b + a;
		cout<<b<<endl;
	}while (a!=0);
}