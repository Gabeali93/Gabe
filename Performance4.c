#include <stdio.h>

int main(){
    //initializes array "Array" and gives value.
    char Array [256][15] = {"stop", "Trying", "so", "Hard"};
    
    printf("This is my quote: ");
    //for loop to iterate through 
    int i;
    for(i = 0; i < 4; i++)
    {
        if (sizeof(Array[i]) == '\0')
        {
            Array[i] = '_';
        }
       printf("\n%s\n\n", Array + i, Array + i, Array + i, Array + i);
    }
    printf("This is a null character: \n%c", Array[5]);
return 0;
    

}