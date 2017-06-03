#include <stdio.h>


// And here is the more elegant solution
// It appears to be an array of char arrays

// The first empty brackets mean you can list as many strings as you want
// The second brackets [80] mean you are limited to 80 char per string (0-79 + sentinel char)
void correctWay()
{
  char tracks[][80] = {
  "I left my heart in Harvard Med School",
  "Newark, Newark - a wonderful town",
  "Dancing with a Dork",
  "From here to maternity",
  "The girl from Iwo Jima",
  };

  for (int i = 0; i < 5; i++) {
    printf("%s\n", tracks[i]);
  }

}

// Strings are basically arrays of Characters in C
// To create an array of strings, create individual char arrays
// for each string & then create a char pointer array that contains
// each char array.

// There may be a more elegant solution for this

int main()
{
  char a[] = "Pulp Fiction";
  char b[] = "The Godfather";
  char c[] = "Apocalypse Now";
  char d[] = "Goodfellas";
  char e[] = "12 Angry Men";
//  printf("%s & %s\n", a, b);


  char* movies[] = {a, b, c, d, e};

  for (int i = 0; i < 5; i++) {
    printf("%s\n", movies[i]);
  }

  correctWay();

  return 0;
}
