#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 3;
	int max = 0;
	max = a > b ? a : b;
	printf("%d\n", max);
	return 0;
}