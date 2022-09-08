#include<stdio.h>
/**
 *  main - Entry point
 *
 *  Return: 0
 *
 */
int main(void)
{
	int intType;
	long int intLongType;
	long long int intLongLongType;
	char charType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(intLongType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(intLongLongType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
