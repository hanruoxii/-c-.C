#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int line = 0;
	while (line < 30000)
	{
		printf("д���룺%d\n", line);
		line++;
	}
	if (line == 30000)
	{
		printf("��offer\n");
	}
	return 0;
}