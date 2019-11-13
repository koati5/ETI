#include <iostream>
using namespace std;
int main()
{
	int n, m, k;
	cin>>n>>m>>k;
	if (n%k==0)
	{
		cout<<n;
		return 0;
	}
	else
		k=n+(k-(n%k));
	if (k>m)
	cout<<"0";
	else
	cout<<k;
	return 0;
}
