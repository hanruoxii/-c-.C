#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
int main()
{
	int a = 10;
	int b = a++;
	printf("%d\n", b);
	printf("%d\n", a);
	return 0;
}