#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings up to n bytes
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * @n: The maximum number of bytes to concatenate from s2
 *
 * Return: A pointer to the concatenated string, or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat_str;
unsigned int s1_len = 0, s2_len = 0, i;
if (s1 != NULL)
s1_len = strlen(s1);
if (s2 != NULL)
s2_len = strlen(s2);
if (n >= s2_len)
n = s2_len;
concat_str = malloc(sizeof(char) * (s1_len + n + 1));
if (concat_str == NULL)
return (NULL);
for (i = 0; i < s1_len; i++)
concat_str[i] = s1[i];
for (i = 0; i < n; i++)
concat_str[s1_len + i] = s2[i];
concat_str[s1_len + n] = '\0';
return (concat_str);
}
