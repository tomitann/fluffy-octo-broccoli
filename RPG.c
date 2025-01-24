#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    
    int intelligence=(rand()% 20)+1;
    int stamina=(rand()% 20-intelligence>=0)+1;
    int charisma=(20-intelligence-stamina);
    
    printf("Intelligence: %d\n",intelligence);
    printf("stamina: %d\n",stamina);
    printf("charisma: %d\n",charisma);
    
    if(intelligence>stamina&intelligence>charisma)
    {
        printf("mage");
    }
    
    else if(stamina>intelligence&stamina>charisma)
    {
        printf("knight");
    }
    
    else if(charisma>stamina&charisma>intelligence)
    {
        printf("charisma");
    }
    
    else
    {
        printf("masse");
    }
    
    
    return 0;
}