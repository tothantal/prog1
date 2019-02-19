#include <stdio.h>

int main()
{
	int a = 10;
	int b = 4;
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	a = a - b;
	b = a + b;
	a = b - a;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
}
