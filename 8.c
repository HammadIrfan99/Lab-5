#include <stdio.h>
int main(void)
{
    int count = 7;
    int spaces = 0;
    while(count > 0)
    {
        int ascii = 65;
        int x = 0;
        while(x < count)
        {
            printf("%c ",ascii);
            ascii++;
            x++;
        }
        int space = 1;
        while (space < spaces)
        {
            printf("  ");
            space++;
        }
        spaces += 2; 
        int ascii_2 = --ascii;
        int y = 0;
        while(y < count)
        {       
                        if (ascii_2 == 71)
            {
                ascii_2--;
                y++;
                continue;
            }  
            printf("%c ",ascii_2);
            ascii_2--;
            y++;
        }  
        printf("\n");
        count--;
    }
}