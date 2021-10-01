//Napisati program koji izbacuje cifru desetica u unesenom broju n.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Unesite neki cijeli broj n"<<endl;
	cin>>n;
	cout<<(n/100)*10+n%10<<endl;
	return 0;
}
