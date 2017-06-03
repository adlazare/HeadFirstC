#include <stdio.h>

// Get input from keyboard & do something with it

int main()
{
  // Create a char array in which to store input, up to 80 characters
  char input[80];

  printf("Search for: ");
  fgets(input, 80, stdin);
  printf("\n%s\n", input);
  printf("Size of input in memory: %lu\n", sizeof(input));

  return 0;
}
