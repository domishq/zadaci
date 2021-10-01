#include<iostream>
using namespace std;
int main()
{
	long a,b,c,d;
	cout<<"Unesite cijenu dijelova u KM: ";
	cin>>a;
	cout<<"\nUnesite ulozeni broj sati: ";
	cin>>b;
	c=b*44;
	d=a+(b*44);
	cout<<"\nCijena dijelova:     "<<a<<"\nCijena rada:     "<<c<<"\n----------------------------"<<"\nUkupna cijena:    "<<d<<"\n"<<endl;

	return 0;	
}
