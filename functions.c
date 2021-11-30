#include <stdio.h>

void goodMorning(); //function prototype
void goodAfternoon();
void goodNight();

int main()
{
    goodMorning(); //function call
    goodAfternoon();
    goodNight();
    return 0;
}

//function defination
void goodMorning()
{
    printf("Good morning\n");
}

void goodAfternoon()
{
    printf("Good Afternoon\n");
}
void goodNight()
{
    printf("Good night\n");
}
