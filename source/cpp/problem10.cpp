#include <iostream>
typedef long long llong;
static inline int prime(llong num)
{
	for (llong i = 2; i*i <= num; ++i)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	llong result = 0;
	int max = 2000000;
	for (int i = 2; i < max; ++i)
	{
		result += prime(i) * i;
	}
	std::cout<<result;
	return 0;
}