#include <stdio.h>
/**
* main - print the string in the printf function
*
* Description: using the main function
* this program prints "programing is like building a multilingual puzzel
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of char: %id byte(s)\n", sizeof(c));
	printf("Size of int: %id byte(s)\n", sizeof(i));
	printf("Size of long int: %id byte(s)\n", sizeof(li));
	printf("Size of long long int: %id byte(s)\n", sizeof(lli));
	printf("Size of float: %id byte(s)\n", sizeof(f));
	return (0); }
