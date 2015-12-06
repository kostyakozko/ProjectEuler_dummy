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
	llong num = 2;
	llong result = 2;
	int count = 0;
	do
	{
		if (prime(num))
		{
			++count;
			result = num;
		}
		++num;
	}
	while (count <10001);
	std::cout<<result;
	return 0;
}