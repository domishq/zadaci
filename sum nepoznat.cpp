#include<iostream>
using namespace std;
int main()
{
	int sum = 0, value = 0;
	while (std::cin >> value)
		sum = sum + value;
	std::cout << "Sum= " << sum << std::endl;
	return 0;
}
