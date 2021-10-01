//	Napisati program koji pomaže kasirki da vrati kusur na osnovu cene i kolièine kupljenog artikla i kolièine novca koju je kupac dao
//	 (ovde se pretpostavlja da je kupljena samo jedna vrsta proizvoda). Kao rezultat treba ispisati koliki kusur treba da vrati kasirka.
#include<iostream>
using namespace std;
int main()
{
	float c,n,k,o;
	cout<<"Kolika je cijena artikla u KM?"<<endl;
	cin>>c;
	cout<<"Kolika je kolicina proizvoda?"<<endl;
	cin>>k;
	cout<<"Koliko je novca kupac dao?"<<endl;
	cin>>n;
	o=n-(c*k);
	if(n<c*k)
	{
		cout<<"Kupac nije dao dovoljno novca"<<endl;
	}
	else if(n>c*k)
	{
		if(o<1)
		{
			cout<<"Kusur koji prodavacica treba da izvrati iznosi: "<<o*100<<"feninga"<<endl;
		}
		else
		{
			cout<<"Kusur koji prodavacica treba da izvrati iznosi: "<<o<<"KM"<<endl;
		}
	}
	cout<<""<<endl;
	
	system("pause");
	return 0;
}
