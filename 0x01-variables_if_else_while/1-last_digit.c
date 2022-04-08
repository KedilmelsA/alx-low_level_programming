#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if number is positive, zero or negative
 * Return: Always (Success)
 */
int main(void)
{
  int n, l;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  l = n % 10;
  if (l > 5)
  {
    printf("Last digit of %d is %d and is greater than 5\n", n, l);
  }
  else if (l == 0)
  {
    printf("Last digit of %d is %d and is 0\n", n, l);
  }
  else
  {
    printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
  }
  return (0);
}
 19  
0x01-variables_if_else_while/2-print_alphabet.c
@@ -0,0 +1,19 @@
#include <stdio.h>

/
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char alp[26] = "abcdefghijklmnopqrstuvwxyz";
  int i;

  for (i = 0; i < 26; i++)
  {
    putchar(alp[i]);
  }
  putchar('\n');
  return (0);
}
