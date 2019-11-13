#include <iostream>
#include <map>
#include <string>
using namespace std;

void dnr(int pmc)
{
		while (pmc>=1000)
		{
			cout<<"M";
			pmc-=1000;
		}
		if (pmc>=900)
		{
			cout<<"CM";
			pmc-=900;
		}
		if (pmc>=500)
		{
			cout<<"D";
			pmc-=500;
		}
		if (pmc>=400)
		{
		   cout<<"CD";
		   pmc-=400;
		}
		while (pmc>=100)
		{
			cout<<"C";
			pmc-=100;
		}
		if (pmc>=90)
		{
			cout<<"XC";
			pmc-=90;
		}
		if (pmc>=50)
		{
			cout<<"L";
			pmc-=50;
		}
		if (pmc>=40)
		{
		   cout<<"XL";
		   pmc-=40;
		}
		while (pmc>=10)
		{
			cout<<"X";
			pmc-=10;
		}
		if (pmc>=9)
		{
			cout<<"IX";
			pmc-=9;
		}
		if (pmc>=5)
		{
			cout<<"V";
			pmc-=5;
		}
		if (pmc>=4)
		{
		   cout<<"IV";
		   pmc-=4;
		}
		while (pmc>=1)
		{
			cout<<"I";
			pmc--;
		}
}
int rnd(string a)
{
map <char, short> system;
 	system['I']=1;
 	system['V']=5;
 	system['X']=10;
 	system['L']=50;
 	system['C']=100;
 	system['D']=500;
 	system['M']=1000;
 	
	int lczb=0;
	for (int i=0; i<a.length(); i++)
	{
		if(system[a[i]]>=system[a[i+1]])
		lczb+=system[a[i]];
		else
		lczb-=system[a[i]];
	}
	return lczb;
}
int main ()
{
	char znk;
	int pmc, r=0;
	string a, b;
	while (cin>>znk)
	{
		cin>>a>>b;
		switch (znk)
		{
			case '+':
			pmc=rnd(a)+rnd(b);
			break;
			case '-':
			pmc=rnd(a)-rnd(b);
			break;
			case '*':
			pmc=rnd(a)*rnd(b);
			break;
			case '/':
			pmc=rnd(a)/rnd(b);
			r=rnd(a)-(pmc*rnd(b));
			break;
		}
		dnr(pmc);
		if(r!=0)
		{
		cout<<" ";
		dnr(r);
		}
		r=0;
		cout<<endl;
	}
	return 0;
}

