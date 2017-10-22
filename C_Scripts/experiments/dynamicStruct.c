#include <stdio.h>
#include <stdlib.h>

// Create a struct that assembles itself from user input
typedef struct{
  char const *name;
  int prepTime;
  char *flavor;
} meals;


void gordonRamseysVerdict(meals m)
{
  printf("Gordon Ramsey says: ");
  printf("Your shit-%s takes %d fuckin' minutes to make? My blind granny could do it faster, and by the way mate, it's not even %s, it tastes like a rhino's arse!\n\n", m.name, m.prepTime, m.flavor);
}

int main()
{
  char input[2] = "";
  int size = sizeof(input);
  char name[20] = "";
  char prepTime[10] = "";
  char flavor[15] = "";
  int x =0;

  printf("Meal name: ");
  // use the sizeof() function to tell fgets how many characters to expect
  fgets(name, sizeof(name), stdin);

  printf("Time to prepare in minutes: ");
  fgets(prepTime, sizeof(prepTime), stdin);

  printf("Flavor profile: ");
  fgets(flavor, sizeof(flavor), stdin);

  // printf("\nMeal: %s\nPrep time: %d\nFlavor: %s\n", name, atoi(prepTime), flavor);

  meals meal = {name, atoi(prepTime), flavor};

  printf("Would you like Gordon Ramsey's opinion on your recipe? [Y/N]: ");
  // fgets(input,sizeof(input), stdin);
  while(fgets(input,sizeof(input), stdin))
  {
    if(*input == 'Y')
    {
      gordonRamseysVerdict(meal);
      break;
    }
    else if(*input == 'N')
    {
      printf("Probably for the best, mate.\n");
      break;
    }
    else
      printf("You must enter either 'Y' or 'N'\n\n");
  }


  return 0;
}
