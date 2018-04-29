#include<stdio.h>

extern void printHello();

int main()
{
	printf("Hello world\n");
	printf("Hello world\n");
	printHello();
	return 0;
}
