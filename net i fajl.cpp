#include<iostream>
#include<iomanip>
#include <string>
using namespace std;
int main()
{
	int m,x,min,sat,sek;
	string a;
	const long k=1024;
	cout<<"Unesite brzinu vaseg interneta u mb/s : "<<setw(5);
	cin>>m;
	cout<<"\nAko je fajl u megabajtima ukucajte mb ili ako je u gigabajtima unesite gb !\nFajl je u : ";
	cin>>a;
	cout<<"\nUnesite velicinu fajla: "<<setw(5);
	cin>>x;
	cout<<setprecision(2);
	if(a=="gb" || a=="GB" || a=="Gb")
	{
		x=x*k;
	}
	else if(a=="mb" || a=="MB" || a=="Mb")
	{
	}
	sat=(x/m)/3600;
	min=((x/m)/60)-(sat*60);
	sek=(x/m)-(sat*3600+min*60);
	cout<<"\nPotrebno je "<<sat<<" sati, "<<min<<" minuta i "<<sek<<" sekundi!"<<endl;
	
	system("pause");
	return 0;
}
