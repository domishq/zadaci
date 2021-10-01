//1milja=1609.34m 1milja=5280stopa,
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const double c=1609.34,d=5280;
	int a,b;
	double milja,metara,kilometara;
	cout<<"Unesite broj milja : "<<setw(10)<<left;
	cin>>a;
	cout<<"Unesite broj stopa : "<<setw(10)<<left;
	cin>>b;
	
	milja=a+(b/d);
	metara=milja*c;
	kilometara=metara/1000;
	cout<<"\n\nRastojanje je "<<long(kilometara)<<" km i "<<long(metara-(long(kilometara)*1000))<<" m\n"<<endl;
	
	system("pause");
	return 0;
}

