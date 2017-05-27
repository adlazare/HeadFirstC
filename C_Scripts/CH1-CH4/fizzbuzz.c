#include <stdio.h>

int main()
{
	int i = 0;

	while (i < 101)
	{
		if (i == 5) {
			puts("fizz\n");
		} else if (i == 10) {
			puts("fizzubzz\n");
		} else {
			printf("%d\n",i);
		}
		i++;
	}
	return 0;
}
		
		
