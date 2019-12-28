#include <math.h>
#include <stdio.h>

int main(int argc, char argv[])
{
	int a, b, c;
	int delta;
	printf("Enter equation coefficents:");
	scanf("%d%d%d", &a, &b, &c);

	delta = (b * b) - (4 * a * c);
	if (delta < 0)
		puts("No real answers!\n");
	else if (delta == 0)
		printf("There is one real answer: %f\n", -b / (2.0 * a));
	else
		printf("There are two real answers: %f and %f\n", (-b + sqrt(delta)) / (2.0 * a), (-b - sqrt(delta)) / (2.0 * a));
}
