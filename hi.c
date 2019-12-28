#include <stdio.h>

int main(void)
{
	char string[255];
	printf("What's your name? ");
	scanf("%s", string);
	printf("Hi, %s!\n", string);
	return 0;
}