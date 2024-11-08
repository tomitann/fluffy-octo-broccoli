#include <stdio.h>

int main()
{
    int k;
    printf("How much did you contribute to the favorite character? ");
    scanf("%d",&k);
    int n;
    printf("How much did you contribute to the favorite pet? ");
    scanf("%d",&n);
   
    if ((k+n)>=50000)
    {
        printf("I spent a lot of money");
    }
    
    else if ((k+n)>=1000 && (k+n)<50000)
    {
        printf("I spent some money");
    }
    
    else
    {
        printf("I did not spent enough money");
    }

    return 0;
}