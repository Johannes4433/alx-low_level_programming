#include <stdio.h>
#include <ctype.h>
/**
 *
 *  * main - Entry point
 *
 *     *printing base 16 digit numbers
 *      * Return: Always 0 (Success)
 *
 *       */

int main(void)

{

	  int a;

	    char A;



	      for (a = 0; a <= 9; a++)

		        {

				    putchar(a + 48);

				      }

	        for (A = 'a'; A <= 'f'; A++)

			  {

				      putchar(A);

				        }

		  putchar('\n');

		    return (0);

}


