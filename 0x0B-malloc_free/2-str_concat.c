#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - getends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		len1++, i++;
	while (*(s2 + j))
		len2++, j++;
	len2++; /*add null terminator to length*/

	concat = malloc(sizeof(char) * (len1 + len2)); /*alloc memory*/

	if (concat == NULL) /*validate memory*/
		return (NULL);

	i = 0, j = 0;
	while (i < len1) /*concatenate*/
	{
		*(concat + i) = *(s1 + i);
		i++;
	}

	while (j < len2)
	{
		*(concat + i) = *(s2 + j);
		i++, j++;
	}

	return (concat);
}
