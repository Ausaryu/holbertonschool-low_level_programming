#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char charType = 'G';
	int intType = '1';
	long int longintType = '1';
	long long longlongintType = '1';
	float floatType = '1';

	printf("Size of a char: %ld byte(s)\n",
		sizeof(charType));
	printf("Size of an int: %ld byte(s)\n",
		sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n",
		sizeof(longintType));
	printf("Size of a long long int: %ld byte(s)\n",
		sizeof(longlongintType));
	printf("Size of a float: %ld byte(s)\n",
		sizeof(floatType));
	return (0);
}
