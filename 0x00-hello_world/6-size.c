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

	printf("size of char: %id byte(s)\n", sizeof(c));
	printf("size of int: %id byte(s)\n", sizeof(i));
	printf("size of long int: %id byte(s)\n", sizeof(li));
	printf("size of long long int: %id byte(s)\n", sizeof(lli));
	printf("size of float: %id byte(s)\n", sizeof(f));
	return (0); }
