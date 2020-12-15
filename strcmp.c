#include<stdio.h>

/*
	strcmp函数的实现
*/

int strcmp_new(const char* src, const* dst)
{
	int ret = 0;
	while (!(ret = *(unsigned char*)src - *(unsigned char*)dst) && *dst)
	{
		src++;
		dst++;
	}
	if (ret < 0) ret = -1;
	else if (ret > 0) ret = 1;
	return ret;
}

int main() {
	char str[10] = "1234";
	char str1[10] = "1234";

	int ret1 = strcmp_new(str, str1);
	printf("ret=%d\n", ret1);
	getchar();
	return 0;
}