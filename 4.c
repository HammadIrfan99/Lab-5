#include <stdio.h>
int main(void)
{
    int ascii = 0;
    while(ascii <= 255)
    {       printf("%d\t",ascii);
            printf("%c\t",ascii);
        ascii++;
    }
}