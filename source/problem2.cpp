#include <iostream>
int main()
{
	int first = 1;
	int second = 1;
	int next = first + second;
	int64_t sum = 0;
	while (next <=4000000)
	{
		if (next % 2 == 0)
		{
			sum += next;
		}
		first = second;
		second = next;
		next = first + second;
	}
	std::cout<<sum;
	return 0;
}