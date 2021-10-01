#include<iostream>
using namespace std;
int main()
{
	char a;
	int b=0;
	cout<<"Unesite znakove, pritiskom na 'ENTER'\nprogram ce izracunati broj unesenih znakova!\n"<<endl;
	a=cin.get();
	while(a!='\n')
	{
		b++;
		if(isspace(a))
			{	
			b--;
			}
		else{
			}
		a=cin.get();
	}
	
	cout<<"\nUnijeli ste "<<b<<" znaka/ova\n"<<endl;
	
	return 0;
}
