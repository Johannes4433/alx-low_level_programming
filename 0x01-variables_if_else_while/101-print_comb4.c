
#include <stdio.h>

#include <ctype.h>

/**
 *
 *  * main - Entry point
 *
 *   *
 *
 *    * Description: A C program that prints with printf function.
 *
 *     *
 *
 *      * Return: Always 0 (Success)
 *
 *
 *
 */

int main(void)

{
        int ch,n,m;
        for (ch=48;ch<=57;ch++)
        {
                for (n=49;n<=57;n++)
                {
                       for (m=50;m<=57;m++)
                        {
                                if(n>ch && m>n)
                                {
                                        putchar(ch);
                                        putchar(n);
                                        putchar(m);
                                        if(ch!=55||n!=56||m!=57)
                                        {
                                              putchar(44);
                                              putchar(32);
                                        }
                               }
                       }
                }
        }
	putchar('\n');
	return 0;
}


