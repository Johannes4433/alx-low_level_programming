#include <stdio.h>

#include <ctype.h>

int main()

{
        int n,ch;
        for (ch=48; ch<=57; ch++)
        {
                for (n=49; n<=57; n++)
                {
                        if(n>ch)
															                        {
                                putchar(ch);
                                putchar(n);
                               if(ch!=56||n!=57)
                                {
                                        putchar(44);
                                        putchar(32);
															                                }
                        }
                }
        }
	putchar('\n');
	return 0;
}
