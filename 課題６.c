#include <stdio.h>

int main()
{
    int k;
    printf("How much did you contribute to the favorite character? ");
    scanf("%d",&k);
    
    if (k>=50000)
    {
        printf("I spent a lot of money");
    }
    
    else
    {
        printf("I did not spent enough money");
    }

    return 0;
}