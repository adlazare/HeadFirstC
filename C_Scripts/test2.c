#include <stdio.h>

int main() 
{
	char band[30];
	char number[3];
	int val = 0;

	puts("What is your favorite band?");
	scanf("%15s", band);
	printf("%s? Great choice man!\n", band);

	puts("Pick a number between 0 and 100 and I'll tell you my favorite band\n");
	scanf("%s", number);
	val = atoi(number);

	band = choose_band(band);
	printf("My favorite band is %s", band);
	return 0;
}



int choose_band(int a)
{
	switch(a) 
	{

	case 10:
		return "The Strokes";
		break;

	switch 20:
		return "Nirvana";
		break;
	}
}





























