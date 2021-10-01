#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const double b=0.0825;
	double a;
	cout<<"Unesite nabavnu cijenu proizvoda: ";
	cin>>a;
	cout<<setprecision(2)<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint);
	cout<<"\nNabavna cijena je :"<<setw(11)<<a<<endl;
	cout<<"Porez je :"<<setw(20)<<a*b<<endl;
	cout<<"Prodajna cijena je :"<<setw(10)<<a+(a*b)<<endl;
	
	system("pause");
	return 0;
}
