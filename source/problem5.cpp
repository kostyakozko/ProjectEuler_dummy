#include <iostream>
int main()
{
	int64_t number = 2*3*5*7*11*13*17*19;
	bool isDivisible = true;
	do
	{
		isDivisible = true;
		for (int i = 11; i <=20; ++i)
		{
			if (number % i != 0)
			{
				++number;
				isDivisible = false;
				break;
			}
		}
	}
	while (!isDivisible);
	std::cout<<number;
	return 0;
}