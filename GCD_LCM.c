#include<stdio.h>

size_t GCD(size_t a, size_t b) // 最大公约数
{
	size_t gcd;
	gcd = a > b ? a : b;
	while (gcd>1)
	{
		if ((a % gcd == 0) && (b % gcd == 0)) {
			return gcd;
		}
		gcd--;
	}
	return gcd;
}

size_t LCM(size_t a, size_t b) // 最小公倍数
{
	size_t lcm;
	lcm = a > b ? a : b;
	while (1)
	{
		if ((lcm % a == 0) && (lcm % b == 0))
		{
			break;
		}
		lcm++;
	}
	return lcm;
}