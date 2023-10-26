#include <stdio.h>
int main()
{
    int x = 1000;
    printf("These are armstrong numbers: ");    
    while(x < 9999)
    {
        int d1 = x / 1000;
        int d2 = x % 1000 / 100;
        int d3 = x % 100 / 10;
        int d4 = x % 10;
        int formula = (d1*d1*d1*d1) + (d2*d2*d2*d2) + (d3*d3*d3*d3) + (d4*d4*d4*d4);
        
        if(x == formula)
        {
            printf("%d , ",x);
        }
        x++;
    }
}
