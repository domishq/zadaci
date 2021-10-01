
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const double c=0.0825;
	double a,b,f=0;
	int d,e=0;
	cout<<"**** Kod Domija ****\n\nGolubic bb\n\n";
	cout<<"Da li ima jos netko tko hoce da plati?\nAko ima ukucaj 1 ako nema ukucaj 0 : ";
	cin>>d;
	cout<<setprecision(2)<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint);
	while(d==1){	
	cout<<"\nZa koliko para su pojeli i popili : ";
	cin>>a;
	cout<<setprecision(2)<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint);
	cout<<"\nPojeli i popili :  "<<setw(10)<<a<<endl;
	cout<<"Porez :            "<<setw(10)<<a*c<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"Ukupan iznos       :"<<setw(10)<<a+(a*c)<<endl;
	
	cout<<"\nUnesite iznos koji je musterija dala : ";
	cin>>b;
	cout<<"\nDati iznos :   "<<setw(10)<<b<<endl;
	cout<<"Ukupan iznos : "<<setw(10)<<a+(a*c)<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<"Kusur         :"<<setw(10)<<b-(a+(a*c))<<endl;
	cout<<"\nDa li ima jos netko tko hoce da plati?\nAko ima ukucaj 1 ako nema ukucaj 0 : ";
	cin>>d;
	e++;
	f=f+a+(a*c);
	}
	cout<<"\nBroj musterija :"<<setw(10)<<e<<endl;
	cout<<"Promet :        "<<setw(10)<<f<<endl;
	cout<<"\n*** Zivi bili i dosli nam opet ! ***\n"<<endl;	

	system("pause");
	return 0;
}
