#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 3;
	int b = 0;
	int c = a && b;
	printf("%d\n",c);
	return 0;
}