#include<iostream>
using namespace std;
int main()
{
	int a,b,c=0,d;
	cout<<"Unesite neki broj : ";
	cin>>a;
	d=a;
	while(a/10!=0)
	{	
		b=a%10;	//ostatak
		a=a/10;	//micanje jedinica
		c=c*10+b; //dodavanju ostatka, te onda onaj prvobitni ostatak se pomjeri ulijevo na mjesto desetica, pa stotica...	
		if(a<10)
		{
			c=c*10+a; //da program ne bi izgubio cifru jedinica od broja a, jer ce kad dodje npr ako je broj a 235, doci ce while do 5 i stati ce, nece opet proci while
		}
	}	
	if(d==c) //provjeravanje broja sa obrnutim nizom cifara da li je isti kao i prvi broj
	{
		cout<<"\nBroj "<<d<<" je palindrom.\n"<<endl;
	}
	else
	{
		cout<<"\nBroj "<<d<<" nije palindrom.\n"<<endl;
	}
	
	system("pause");
	return 0;
}
