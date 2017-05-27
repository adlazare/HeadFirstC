#include <stdio.h>
#include <stdlib.h>

int main()
{
	char line[80];

	FILE *in;
	if (!(in = fopen("in.txt", "r"))) {
		fprintf(stderr, "Can't open the file.\n");
		return 1;
	}
	
	while (fscanf(in, "%79[^\n]\n", line) == 1) {
		
		printf("%s\n", line);
		printf("%d\n", *line);
/*
		if ((*line % 3 == 0) && (*line % 5 == 0))
			printf("fizzbuzz!\n");
		else if (*line % 3 == 0)
			printf("fizz\n");
		else if (*line % 5 == 0)
			printf("buzz\n");

		else
			printf("%d\n", *line);
*/
	}

	return 0;
}
