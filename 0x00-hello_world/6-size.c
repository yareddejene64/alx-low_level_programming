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

	printf("Size of char: %id byte(s)\n", sizeof(chartype));
	printf("Size of int: %id byte(s)\n", sizeof(inttype));
	printf("Size of long int: %id byte(s)\n", sizeof(li));
	printf("Size of long long int: %id byte(s)\n", sizeof(lli));
	printf("Size of float: %id byte(s)\n", sizeof(floattype));
	return (0); }
