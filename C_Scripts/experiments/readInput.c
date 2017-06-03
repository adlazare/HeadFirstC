#include <stdio.h>

// Create a struct that assembles itself from user input
int main()
{
  char line[80];

  fgets(line, 80, stdin);

  printf("your input: %s\n\n", line);
  printf("size of input in mem: %lu\n", sizeof(line));
  printf("address of input in mem: %p\n", &line);
  printf("address of input in mem: %p\n", &line + 1);

  return 0;
}
