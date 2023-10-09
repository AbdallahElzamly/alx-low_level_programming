#include "main.h"

/**
*string_nconcat - Concatenates two strings using at
*most an inputted number of bytes.
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*
*Return: If the function fails - NULL.
*Otherwise - a pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, indx;

    //Here we are checking whther one of these strings are NULL or no???
    //Test 1
    if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

    for (indx = 0; s2[indx]; indx++)
        len++;
    
    concat = malloc(sizeof(char) * (len + 1));
    
    if (concat == NULL)
        return (NULL);

    len = 0;

    for (indx = 0; s1[indx]; indx++)
        concat[len++] = s1[indx];

    for (indx = 0; s2[indx] && indx < n; indx++)
        concat[len++] = s2[indx];

    concat[len] = '\0';

    return (concat);
}
