#include <iostream>
int main()
{
	int64_t num1 = 0;
	int64_t num2 = 0;
	for (int i = 0; i<= 100; ++i)
	{
		num1 += i;
		num2 += i*i;
	}
	num1 *= num1;
	std::cout<<(num1-num2);
	return 0;
}