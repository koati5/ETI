#include <iostream>

int tblc [1000]={0};

using namespace std;

void wps (int pcztk, int x)
{
	if (tblc[pcztk]==0)
 	     tblc[pcztk]=x;
    else if (tblc[pcztk]>x)
 		 wps((2*pcztk+1), x);
    else
    	 wps((2*pcztk), x);
}

int main ()
{
	int a; cin>>a;
	for (int i=0; i<a+2; i++)
	{
 	 	  int x; cin>>x;
 	 	  wps(1, x);
	}
	for (int i=0; i<a+2; i++)
	cout<<tblc[i]<<" ";
	
	return 0;
}

