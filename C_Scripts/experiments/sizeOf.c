#include <stdio.h>

void sizeOf()
{
	printf("Size of char: %lu\n", sizeof(char));
	printf("Size of int: %lu\n", sizeof(int));
	printf("Size of float: %lu\n", sizeof(float));
	printf("Size of long: %lu\n", sizeof(long));
	printf("Size of double: %lu\n", sizeof(double));
}

int main ()
{
	sizeOf();

	return 0;
}
