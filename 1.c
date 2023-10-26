#include <stdio.h>
int main(void)
{
    int x, num, count = 0, sum = 0;
    int smallest;
    printf("Enter number of values you want to calculate sum of: ");
    scanf("%d",&x);
    while(count < x)
    {
        printf("Enter the number: ");
        scanf("%d",&num);
        if (count == 0)              // Initializing smallest with first number
        {
            smallest = num;
        }
        if (num < smallest)
        {
            smallest = num;
        }
        sum += num;         // Calculating sum
        count++;
    }
    printf("The sum is: %d \n",sum);
    printf("The smallast number is: %d ",smallest);
}