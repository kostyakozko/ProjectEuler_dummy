#include <iostream>
int main()
{
	int number = 997799;
	int firstDivider = 100;
	int secondDivider = 0;
	while (number >= 100000)
	{
		for (firstDivider = 100; firstDivider < 1000; ++firstDivider)
		{
			if ((number % firstDivider == 0) && (number / firstDivider < 1000) && (number / firstDivider >= 100) )
			{
				secondDivider = number / firstDivider;
				break;
			}
		}
		if (secondDivider != 0)
		{
			break;
		}
		else
		{
			if (number % 1000 < 100)
			{
				number -= 110;
			}
			else
			{
				number -= 1100;
			}
		}
	}
	std::cout <<number;
	return 0;
}