#include <stdio.h>
#include <stdlib.h>

// Create a struct that assembles itself from user input
typedef struct{
  char const *name;
  float prepTime;
  char *flavor;
} meals;


meals create(meals m)
{
  
}

int main()
{
  char name[20] = "";
  char prepTime[10] = "";
  char flavor[15] = "";

  printf("Meal name: ");
  // use the sizeof() function to tell fgets how many characters to expect
  fgets(name, sizeof(name), stdin);

  printf("Time to prepare in minutes: ");
  fgets(prepTime, sizeof(prepTime), stdin);

  printf("Flavor profile: ");
  fgets(flavor, sizeof(flavor), stdin);

  // printf("\nMeal: %s\nPrep time: %d\nFlavor: %s\n", name, atoi(prepTime), flavor);

  meals meal = {name, atoi(prepTime), flavor};



  return 0;
}
