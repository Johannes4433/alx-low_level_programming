#include <stdio.h>
#include <ctype.h>
int main()
{
       char n;
       int i;
       for (i=65; i<91;i++)
       {
                  if(i!=69&&i!=81)
	                  putchar(tolower((char)i));
        }
        n='\n';
        putchar(n);
        return 0;
}


