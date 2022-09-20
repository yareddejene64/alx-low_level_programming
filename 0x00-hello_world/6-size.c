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
	char chartype;
	int inttype;
	long li;
	long long lli;
	float floattype;

	printf("Size of char: %lu byte(S)\n", (unsigned long)sizeof(chartype));
	printf("Size of int: %lu byte(S)\n", (unsigned long)sizeof(inttype));
	printf("Size of long int: %lu byte(S)\n", (unsigned long)sizeof(li));
	printf("Size of long long int: %lu byte(S)\n", (unsigned long)sizeof(lli));
	printf("Size of float: %lu byte(S)\n", (unsigned long)sizeof(floattype));
	return (0); }
