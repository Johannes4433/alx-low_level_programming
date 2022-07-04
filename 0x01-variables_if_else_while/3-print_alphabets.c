#include <stdio.h>
#include <ctype.h>
int main()
{
        char n;
        int i,k=0;
        for (i=65; i<91;i++)
                putchar(tolower((char)i));
        for (i=97; i<=122;i++)
                putchar(toupper((char)i));
        n='\n';
        putchar(n);
        return 0;
}
