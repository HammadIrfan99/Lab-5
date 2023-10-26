#include <stdio.h>
void main()
{
    int x , y, smaller = x; // Initializing variables
    printf("Enter two integers: ",x,y);
    scanf("%d%d",&x,&y);
    if(y > x)
    smaller = y;
    while(smaller > 0)  // Hre is while loop
    {
        if(x % smaller == 0 && y % smaller == 0)
        {
            printf("The GCD of %d and %d is %d\n",x,y,smaller);
            break;
        }
        smaller--;
    }
}