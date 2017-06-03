#include <stdio.h>

int main()
{
  char alphabet[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

  for(int i = 0; i < 26; i++){
    printf("Letter: %c\n", alphabet[i]);
    printf("Address of letter: %p\n", &alphabet[i]);
  }

  printf("\nSize of char: %lu\n", sizeof(char));
  printf("Size of alphabet array: %lu\n", sizeof(alphabet));

  return 0;
}
