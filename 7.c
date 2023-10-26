#include <stdio.h>
int main(void)
{   
    int x = 2;
    printf("\tThese are prime numbers: ");
    while(x <=10000)
    {
       int div = x / 2;
       int factor_count = 0;
            while(div > 1)
            {
                if(x % div == 0)
                {
                    factor_count++;
                    break;
                }
                    div--;
            }
        if(factor_count == 0)
        {
                printf("%d\t",x);
        }
        x++;
    }
}