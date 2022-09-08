#include<stdio.h>
/**
 *  main - Entry point
 *
 *  Return: 0
 *
 */
int main(void)
{
	int intTyppe;
	long int intLongType;
	long long int intLongLongType;
	char charType;
	float floatType;

	printf("Size of char: %zu byte(s)\n", sizeof (charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(intLongType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(intLongLongType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
