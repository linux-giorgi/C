#include <stdio.h>
#include <stdlib.h>

char string[]
    = "------------------------------------------------------------------------"
      "----------------------------------------------------------";

// size of string variable
short size = sizeof (string) / sizeof (string[0]);

// animation function
void
animation ()
{

  // for loop for fill string list witch " # "
  for (short i; i < size; i++)
    {
      system ("sleep 0.5");
      system ("clear");
      string[i] = '#';
      printf ("%s\n", string);
    }
}

int
main ()
{
  // start
  animation ();
  return 0;
}
