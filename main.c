#include<stdio.h>

extern void printHello();

int main()
{
	printf("Hello world\n");

    char* myStr = "test str";
    printf("mystr = %s, len=%d\n",myStr, Mystrlen(myStr));

	printHello();
	return 0;
}
