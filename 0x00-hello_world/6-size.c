#include<stdio.h>
int main(void)
{
		printf("Size of a char: %d byte(s)\nSize of an int: %d byte(s)\n" 
			"Size of a long int: %d byte(s)\nSize of a long long int: %d byte(s)\n"
			"Size of a float: %d byte(s)\n"
			, sizeof(char), sizeof(int), sizeof(long), sizeof(double), sizeof(float));

			return (0);

}
