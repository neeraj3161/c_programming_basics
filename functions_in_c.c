#include<stdio.h>
void message();  //this is a function prototype
int main()
{
    printf("Cry and you stop the monotony!\n");
    message();
    return 0;
}
// message();



// below is the function content
//we are using void as we dont want anythinng in return
void message(){
    printf("Smile and the world smiles with you :)");
}

