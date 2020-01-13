#include <stdio.h>

int main(){

    int x = 99;
    int y = 0;

    //////// WRITE EACH RESULT ////////
    /*x && y
    y || x
    !y
    y && 0
    x || 42
    !x
    x && x
    y || y
    !1
    1 && 1
    (0 && 1) || (2 && 3) 
    */

    int userAnswer = 0;
    printf("Welcome to your Logical operator quiz! \n");                        //Print statement welcoming user
    printf("Enter either a '1' or a '0' for your answers.\n");                  //Explains to user how to input answers properly
    printf("1) %d && %d = ",  x, y);                                            //displays question to user and prompts them for an answer
    scanf("%d", &userAnswer);                                                   //Takes user input an passes it to the 'userAnswer' variable
    
    printf("Correct answer is %d, your answer was %d.\n", x && y, userAnswer);  //Displays the correct answer and the users answer for comparison

    
    printf("2) %d || %d = ",  y, x);
    scanf("%d", &userAnswer);
    
    printf("Correct answer is %d, your answer was %d.\n", x || y, userAnswer);

   
    printf("3) !%d  = ", y);
    scanf("%d", &userAnswer);
    
    printf("Correct answer is %d, your answer was %d.\n", !y, userAnswer);

    
    printf("4) %d && 0 = ",  y);
    scanf("%d", &userAnswer);
    
    printf("Correct answer is %d, your answer was %d.\n", y && 0, userAnswer);

    
    printf("5) %d || 42 = ",  x);
    scanf("%d", &userAnswer);
    
    printf("Correct answer is %d, your answer was %d.\n", x || 42, userAnswer);

    
    printf("6) !%d = ",  x);
    scanf("%d", &userAnswer);
    
    printf("Correct answer is %d, your answer was %d.\n", !x, userAnswer);

    
    printf("7) %d && %d = ",  x, x);
    scanf("%d", &userAnswer);
    
    printf("Correct answer is %d, your answer was %d.\n", x && x, userAnswer);


    printf("8) %d || %d = ",  y, y);
    scanf("%d", &userAnswer);
    
    printf("Correct answer is %d, your answer was %d.\n", y || y, userAnswer);


    printf("9) !1 = ");
    scanf("%d", &userAnswer);
    
    printf("Correct answer is %d, your answer was %d.\n", !1, userAnswer);


    printf("10) 1 && 1 = ");
    scanf("%d", &userAnswer);
    
    printf("Correct answer is %d, your answer was %d.\n", 1 && 1, userAnswer);


    printf("11) (0 && 1) || (2 && 3) = ");
    scanf("%d", &userAnswer);
    
    printf("Correct answer is %d, your answer was %d.\n", (0 && 1) || (2 && 3), userAnswer);



return 0;
}