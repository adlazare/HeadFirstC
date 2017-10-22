#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  const char* lineConst;
  char line[80];
  char* subString;
  int i = 0;
  int count = 0;
  float length = 0;

  // open the file
  FILE *in;
  if (!(in = fopen("script.txt", "r"))) {
		fprintf(stderr, "Can't open the file.\n");
		return 1;
	}

  while (fscanf(in, "%79[^\n]\n", line) == 1) {
     if(strstr(line, "platform,"))
     {
       // strtok separates the string into 'tokens' based on the delimiter, which is a ',' here
       subString = strtok(line,",");

       // iterates through the string, only the 6th token is used & added to total length
       while(subString != NULL)
       {
         subString = strtok(NULL,",");

         if(i == 6)
         {
          length = length + atof(subString);
          printf("%s\n", subString);
          printf("New length: %f\n", length);
         }
         // i is used to keep track of the iterations & record a value at the 6th iteration
         i++;
       }

       i = 0;
     }
  }

  printf("Level Length: %f seconds\n", length);
  // always close your files!
  fclose(in);

  return 0;
}
