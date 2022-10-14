#include<stdio.h>

/**
 * main - entry point
 *
 * Description: A C program that checks the sizes of the various data types
 *
 * Return: Always 0 (success)
 *
*/

int main(void)
{
	printf("Size of a char: %2d byte(s) \n", sizeof(char));
	printf("Size of an int: %2d byte(s) \n", sizeof(short int));
	printf("Size of a long int: %2d byte(s) \n", sizeof(long int));
	printf("Size of a long long int: %2d byte(s) \n", sizeof(long long int));
	printf("Size of a float: %2d byte(s) \n", sizeof(float));
	return (0);

}
