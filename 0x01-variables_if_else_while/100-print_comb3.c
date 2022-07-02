#include <stdio.h>
#include <ctype.h>
/**
 *
 *  * main - Entry point
 *
 *   
 *
 *    * Description: A C program that prints with printf function.
 *
 *     
 *
 *      * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n, ch;

	for (ch = 48; ch <= 57; ch++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > ch)
			{
				putchar(ch);
				putchar(n);
				if (ch != 56 || n != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
