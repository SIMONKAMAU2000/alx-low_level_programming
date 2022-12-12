#include <stdio.h>
/**
 * main-Entry point
 * Description: Gives the size of data types
 * @sizeof() - Return the size of the data type
 * @printf() - Prints a line/string
 * Return: Always 0 (Success)
 */
int main (void)
{_
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of a int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
