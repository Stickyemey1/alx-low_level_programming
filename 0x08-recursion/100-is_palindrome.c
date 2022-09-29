#include "main.h"
/**
 * wildcmp - a function that compare two string that contain *
 * "*" character that can be any prosible
 * @s1: pointer point to string 1
 * @s2: pointer point to string 2
 *
 * Return: return 1 if two string was considered the same, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
