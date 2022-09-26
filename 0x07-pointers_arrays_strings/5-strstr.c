#include "main.h"


/**
 * _strstr -  a function that locates a substring.
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i=0, j=0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + J] == needle[j])
			       j++;
			else
			       break;
		}

		if (needle[j])
		{
			i++;
			j = 0;
		}

		else
		        return (haystack + i); 
	}
	return (0);
}
