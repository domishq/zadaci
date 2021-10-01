#include<iostream>
using namespace std;
int main()
{
	int sum = 0,a=0;
	float value = 0;
	int b;
	cout<<"Nakon sto unesete prosjeke, unesite neki znak ili tekst da zavrsite unos ocjena!"<<endl;
	while (std::cin >> value)
		{sum = sum + value;
		a=a+1;
		}
		b=sum/a;
		if(b>=1.5 | b>=2.5 | b>=2.5 | b>=3.5 | b>=4.5)
		{
		b=b+1;	
		cout << "Opci uspjeh= " << b << endl;
		}
		else {cout << "Opci uspjeh= " << b << endl;
		}
	
	return 0;
}
