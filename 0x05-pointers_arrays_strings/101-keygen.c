#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - entry point
 *
 * Return: generated password
 */

int main(void)
{
	char c;
	int x;

	srand(time(0));
	while (x <= 1200)
	{
		c = rand() % 311;
		x += c;
		putchar(c);
	}
	putchar(993 - x);

	return (0);
}
