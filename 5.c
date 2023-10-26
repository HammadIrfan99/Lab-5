#include <stdio.h>
int main(void)
{
    int num = 7;
    printf("I have choosen a number between 1 to 10. Try to guess it.");
    int x;
    while(x != num)
    {
        printf("Enter a number: ");
        scanf("%d",&x);
        if(x != num)
        {
            printf("This is incorrect. Guess it again.\n");
        }
        else if(x == num)
        {
            printf("That's right. You guessed.\n");
        }
    }
}