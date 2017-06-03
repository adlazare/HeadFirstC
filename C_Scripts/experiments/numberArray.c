#include <stdio.h>

int main()
{
  int numbers[] = {1,2,3,4,5,6,7,8,9,10};

  for (int i = 0; i < 10; i++) {
    printf("Number: %d\n", numbers[i]);
    printf("Address: %p\n", &numbers[i]);
    printf("Size of Number %d: %lu\n", i + 1, sizeof(numbers[i]));
  }

  printf("Size of number array: %lu\n", sizeof(numbers));

  return 0;
}
