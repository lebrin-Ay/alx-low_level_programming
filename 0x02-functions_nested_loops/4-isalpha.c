#include "main.h"
/**
 * _isalpha - check the code for alphabetic characters
 * @c: letter to be checked
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
