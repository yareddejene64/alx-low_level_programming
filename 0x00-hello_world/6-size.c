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

	printf("size of char : %zu byte\n",sizeof (chartype));
	printf("size of int : %zu byte\n",sizeof (inttype));
	printf("size of long : %zu byte\n",sizeof (li));
	printf("size of long long : %zu byte\n",sizeof (lli));
	printf("size of float : %zu byte\n",sizeof (floattype));
	return(0); }
