#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main ()
{
	int a;
 	cin>>a;
 	stack <int> zwrt;
 	queue <int> wgn;
 	wgn.push(-1);
 	zwrt.push(-1);
 	for (int i=0; i<a; i++)
 	{
 		int pmc;
 		cin>>pmc;
 		wgn.push(pmc);
	}
	int pmc=1;
 	while (pmc<=a)
	 {
	 	
	 	if(wgn.front()==pmc)
	 	{
	 		wgn.pop();
	 		pmc++;
	 	}
 	 	else if(zwrt.top()==pmc)
		{
			zwrt.pop();
			pmc++;
 		} 
 		else if(wgn.size()>1)
 		{
 			zwrt.push(wgn.front());
 			wgn.pop();
	 	}
	 	else
	 	{
	 	 	cout<<"NIE";
			return 0;	
 		}
	 }
	 cout<<"TAK";
	return 0;
}

