#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte (s)\a", sizeof(char));
	printf("Size of a int: %lu byte (s)\a", sizeof(int));
	printf("Size of a long int: %lu byte (s)\a", sizeof(long int));
	printf("Size of a long long int: %lu byte (s)\a", sizeof(long long int));
	printf("Size of a float: %lu byte (s)\a", sizeof(float));
	return (0);

}
