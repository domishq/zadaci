#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long a,b;
	cout<<"Unesite cijenu dijelova u KM:";
	cin>>a;
	cout<<"\nUnesite ulozeni broj sati:";
	cin>>b;
	cout<<"\nCijena dijelova:"<<setw(12)<<a<<endl;
	cout<<"Cijena rada:"<<setw(16)<<b*44<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Ukupna cijena:"<<setw(14)<<a+(b*44)<<"\n"<<endl;

	return 0;	
}
