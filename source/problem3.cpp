#include <iostream>
int main()
{
	int64_t divider = 2;
	int64_t max = 0;
	int64_t number = 600851475143;
	while (divider <= number)
	{
		if (number % divider == 0)
		{
			number /= divider;
			max = divider;
		}
		else
		{
			++divider;
		}
	}
	std::cout << max;
	return 0;
}