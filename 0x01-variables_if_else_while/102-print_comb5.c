<<<<<<< HEAD
=======
#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 2 digits
 * Return: 0
 */
int main(void)
{
    int n1 = 0, n2;
    while(n1 <= 99)
    {
        n2 = n1;
        while(n2 <= 99)

{
    if (n2 != n1)
    {
        putchar((n1 / 10 ) + 48 );
        putchar((n1 % 10) + 48 );
        putchar(' ');
        putchar((n2 / 10) + 48);
        putchar((n2 % 10) +  48);

        if(n1 != 98 || n2 != 98)
        {
            putchar(',');
            putchar(' ');
        }
        ++n2;
    }
    ++n1;
  }
  putchar('\n');
  return 0;
    }
}
}
>>>>>>> fd31ef7a3c8d0054f22a15f4aedba6d9639ac94a

