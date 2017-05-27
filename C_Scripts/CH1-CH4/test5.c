#include <stdio.h>


int band_reader(char *msg) {
	printf("Message received: %s\n", msg);
	return 0;
}

int main() {
	char band[10];
	
	printf("What's your favorite band bro?\n");
	fgets(band, sizeof(band), stdin);

	printf("%s? Good choice man! I love those guys.", band);
	band_reader(band);
	return 0;
}

