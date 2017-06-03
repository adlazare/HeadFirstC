#include <stdio.h>
// Structs take a pointer for a string

typedef union{
  short stars;
  int beachBalls;
  float flarbs;
} ratingType;

typedef enum{
  STARS,
  FLARBS,
  BEACHBALLS
} ratingTypeList;

typedef struct{
  char *title;
  int year;
  char *opinion;
  ratingType type;
  ratingTypeList name;
} Movie;

// To pass a struct to a function, pass the struct type & a variable name
// To simply display values, passing the struct normally is fine, to alter the
// variables, pass a struct pointer instead
void display(Movie m)
{
  printf("Title: %s\nYear: %d\nOpinion: %s\n", m.title, m.year, m.opinion);

  if(m.name == STARS)
    printf("Rating: %d stars\n\n", m.type.stars);
  else if (m.name == BEACHBALLS)
    printf("Rating: %d beach balls\n\n", m.type.beachBalls);
  else if (m.name == FLARBS)
    printf("Rating: %f flarbs\n\n", m.type.flarbs);
}

int main()
{
  Movie movie = {"Inglorious Basterds", 2010, "So dope",.type.flarbs=137.24, FLARBS};

  display(movie);

  return 0;
}
