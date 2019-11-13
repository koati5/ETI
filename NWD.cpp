#include <iostream>

using namespace std;

void dzlnk (int a, int b)
{
	if (b==0)
	{
		cout<<a;
	}
	else
	{
		dzlnk (b, a%b);
	}
}
int main ()
{
	int a, b;
	cin>>a>>b;
	if (a>b)
	{
		dzlnk(a,b);
	}
	else
	{
		dzlnk(b,a);
	}
	return 0;
}

