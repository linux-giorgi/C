#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

// data structures
struct val
{
  int length;
  int char_type;
};
struct val Val;

struct length
{
  int digits_l;
  int lowers_l;
  int uppers_l;
  int symbols_l;
};
struct length Length;

// data
char *digits = "0123456789";
char *lowers = "abcdefghijklmnopqrstuwxyz";
char *uppers = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *symbols = "!@#$%^&*()";

// function headers
void Password_generator ();

int
main ()
{
  Password_generator ();
  return 0;
}

// password generator method
void
Password_generator ()
{

  // data input from user
  printf ("Length: ");
  scanf ("%d", &Val.length);

  if (Val.length <= 0)
    printf ("Password length must be >= 1!");

  char *password = malloc (Val.length + 1);

  Length.digits_l = strlen (digits);
  Length.lowers_l = strlen (lowers);
  Length.uppers_l = strlen (uppers);
  Length.symbols_l = strlen (symbols);

  srand (time (NULL) * getpid ());

  for (int i = 0; i < Val.length; i++)
    {

      Val.char_type = rand () % 4;

      if (Val.char_type == 0)
        password[i] = digits[rand () % Length.digits_l];

      else if (Val.char_type == 1)
        password[i] = lowers[rand () % Length.lowers_l];

      else if (Val.char_type == 2)
        password[i] = uppers[rand () % Length.uppers_l];

      else
        password[i] = symbols[rand () % Length.symbols_l];
    }

  password[Val.length] = '\0';
  printf ("Password: %s\n", password);
  free (password);
}
