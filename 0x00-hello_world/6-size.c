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

	printf("size of char : %id byte(s)\n" , sizeof (chartype));
	printf("size of int : %id byte(s)\n" , sizeof (inttype));
	printf("size of long : %id byte(s)\n" , sizeof (li));
	printf("size of long long : %id byte(s)\n" , sizeof (lli));
	printf("size of float : %id byte(s)\n" , sizeof (floattype));
	return (0); }
