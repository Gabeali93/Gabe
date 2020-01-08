#include <stdio.h>

int main(){
    int i;
    char favSaying [4][15] = {"Stop", "Trying", "so", "Hard"};
    for(i = 0; i < 4; i++)
    {
       printf("\n%s\n", favSaying + i, favSaying + i, favSaying + i, favSaying + i); 
    }
    

    //favSaying [3][15] = 0;

    

return 0;
    

}