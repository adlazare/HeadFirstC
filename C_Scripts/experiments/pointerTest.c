#include <stdio.h>

int update (int *y)
{
	*y = 10;

	printf("%d\n%p\n", *y, y);
	printf("Update complete\n");
}

int main ()
{
	int x = 5;
	int *p;
	p = &x;

	printf("Value of x: %d\nAddress of x in memory: %p\n", *p, p);

	update(p);

	printf("Value of x is now: %d\nAddress of x: %p\n", *p, p);

	return 0;
}
