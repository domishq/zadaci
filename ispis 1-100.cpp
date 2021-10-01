#include<iostream>
using namespace std;
int main()
{
	int i,a;
	cout<<"Unesite koliko brojeva zelite ispisati od 1 do 100"<<endl;
	cin>>a;
	cout<<""<<endl;
	for(i=1;i<=a;i++)
	if(a<101 & a>0)
	{
		cout<<i<<endl;
	}
	else
	{
		cout<<"Uneseni broj je netocan"<<endl;
	}
	cout<<""<<endl;
	system("pause");
	return 0;
}
