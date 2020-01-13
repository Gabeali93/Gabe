#include <stdio.h>

int x = 2;
int y = 6;
//////// WRITE EACH RESULT ////////
/*  
    y < x
    
    y <= x
    
    y > x
    
    y >= x
    
    y == x
    
    y != x
    
    2 == y
    
    6 != x
    
    6 >= 2
    
    2 < 6
    
    x != y != 3 >= x     
*/
int main(){
    
    int userAnswer = 0;
    printf("Welcome to your Relational operator quiz! (y/n)\n");
    printf("1) %d < %d = ",  y, x);
    scanf("%1c", &userAnswer);
    
    printf("Correct answer is %d, your answer was %d.\n", y < x, userAnswer);
    
    
    
    return 0;
}