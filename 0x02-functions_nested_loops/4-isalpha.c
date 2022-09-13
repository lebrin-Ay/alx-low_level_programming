#include "main.h"
/**
 * _isalpha - check the code for alphabetic characters
 * @c: letter to be checked
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 977 && c <= 122))
		return (1);
	else
		return (0);
}
