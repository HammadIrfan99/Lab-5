#include <stdio.h>
int main(void)
{
    int num = 1, total = 1;
    printf("X \t Factorial\n");
    
    while(num <= 5)
    {
        printf("%d \t",num);
        total *= num;
        printf("%d",total);
        num++;
        printf("\n");
    }
}