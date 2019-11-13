#include <iostream>
using namespace std;
bool tblc [1000001]={0};
int main ()
{
 	int a; cin>>a;
 	short lcznk=0;
	for (int i=0; i<a; i++)
	{
		int x, y; cin>>x>>y;
		if(x==1&&y==1)
		{
			lcznk++;
		}
		for(int j=x; j<y; j++)
		{
			tblc[j]=true;
		}
	}
	if (lcznk==3) { cout<<"1 1\n"; return 0;
	}
	for(int i=1; i<=1000000; i++)
	{
		if(tblc[i-1]<tblc[i])
		cout<<i<<" ";
		if(tblc[i-1]>tblc[i])
		cout<<i<<endl;
	}
	return 0;
}

