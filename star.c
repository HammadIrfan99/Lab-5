#include <stdio.h>
void main()
{
    int c=5, x=1;
    while(c>0)
    {
        while(x<=c)
        {
            printf("*");
            x++;
        }
        x=1;
        c--;
        puts("");
    }
        
} 