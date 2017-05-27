/*
 * Program to evaluate face values.
 * Released under the Vegas Public License.
 * (c)2014 The College Blackjack Team.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	int count = 0;

	while (card_name[0] != 'X') 
	{
		puts("Enter the card_name: ");
		scanf("%2s", card_name);
		int val = 0;
		switch(card_name[0])
		{
		case 'J':
		case 'Q':
		case 'K':
			val = 10;
			break;
		case 'A':
			val = 11;
			break;
		case 'X':
			puts("You done fucked up now");
			continue;
		default:
			val = atoi(card_name);
			if ((val < 1) || (val > 10)) {
				puts("C'mon dude, that card doesn't exist..");
				continue;
				}
		}
		/* Check if the value is 3 to 6 */
		if ((val > 2) && (val < 7)) 
			count++;
		/* Otherwise check if the card was 10, J, Q, or K */
		else if (val == 10)
			count--;
		printf("Current count: %i\n", count);
	}
	return 0;
}