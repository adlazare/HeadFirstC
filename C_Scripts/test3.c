#include <stdio.h>

void fortune_cookie(char msg[])
{
printf("Message size: %i\n", sizeof(msg));
printf("Memory address: %s\n", msg);
}

int main() {
char quote[] = "Cookies make you fat";
printf("Original message size: %i\n", sizeof(quote));
printf("Original memory address: %p\n", quote);
printf("this = %p\n", *quote);
fortune_cookie(quote);
}
