#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 9 / 2;
	printf("%d\n", a);
	
	float b = 9 / 2.0;
	printf("%f\n", b);
	
	int c = 9 % 2;
	printf("%d\n", c);

	int d = 2;
	int e = d << 1;
	printf("%d\n", e);

	int g = 10;
	printf("%d\n", !g);



	return 0;
}