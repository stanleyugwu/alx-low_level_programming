/* Prints the sizes of various primitive data types */


#include <stdio.h>

/**
 * main - Main entry point
 *
 * Prints the sizes of in built C types to stdout
 *
 * Return: Returns 0 as exit code
 */
int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof char);
	printf("Size of a int: %d byte(s)", sizeof int);
	printf("Size of a long: %d byte(s)", sizeof long);
	printf("Size of a long long: %d byte(s)", sizeof long long);
	printf("Size of a float: %d byte(s)", sizeof float);
}
