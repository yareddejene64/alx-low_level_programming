#include "main.h"
<<<<<<< HEAD
/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
=======

/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */
{
  int base = 10;
  while (n > 0)
  {
	  base *= 10;
	  n--;
  }
  return (base);
}
/**
 * print_number - prints integers enters as parameters using putchar
 * @n: integer to print
 * Return: void
>>>>>>> dee2a4f4a1c1daa160530dcf604fae94c0376ede
 */
void print_number(int n)
{
 	unsigned int x = n;

              if (n < 0)
	      {
		      _putchar('-');
		      x = -x;
	      }
	      if ((x / 10) > 0)
		      print_number(x / 10);
	      _putchar(x % 10 + '0');
}
