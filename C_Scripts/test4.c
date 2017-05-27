#include <stdio.h>

int main() {
	int doses[] = {1, 3, 2, 1000};
	printf("Issue dose %i\n", doses[3]);
	printf("1st element: %i\n", doses[0]);
	printf("1st element: %i\n", *doses);
}
