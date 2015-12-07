#include <cstdio>
static inline int check(int a, int b, int c)
{
	if ((a + b > c) && (a + c > b) && (b + c > a))
		return 1;
	else 
		return 0;
}
int main()
{
	int a,b,c;
	int product = 0;
	for (a = 1; a < 1000;++a)
	{
		for (b = 1; a+b < 1000; ++b)
		{
			c = 1000 - (a + b);
			if (a*a + b*b == c*c)
			{
				product = a*b*c*check(a,b,c);
				break;
			}
		}
		if (product)
		{
			break;
		}
	}
	printf("a=%d, b= %d, c=%d, result=%d", a, b, c, product);
	return 0;
}