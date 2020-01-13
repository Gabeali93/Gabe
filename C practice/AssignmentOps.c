#include <stdio.h>

int main(){
        int x = 9;
        int y = 3;
        //////// WRITE EACH VALUE OF X ////////
        /*
        x *- y
        x /= y
        x %= y
        x += y
        x -= y
        x *= ++y
        x /= y--
        x %= --x
        x += --y
        x -= y++
        (y %= y) || (x /= x--)      
        */
        int userAnswer = 0;
        printf("Welcome to your Logical operator quiz! \n");                        //Print statement welcoming user
        printf("Enter your answer for each of the following questions.\n");                  //Explains to user how to input answers properly
        printf("1) %d *= %d = ",  x, y);                                            //displays question to user and prompts them for an answer
        scanf("%d", &userAnswer);                                                   //Takes user input an passes it to the 'userAnswer' variable
        
        printf("Correct answer is %d, your answer was %d.\n", x *= y, userAnswer);  //Displays the correct answer and the users answer for comparison

        
        printf("2) %d /= %d = ",  x, y);
        scanf("%d", &userAnswer);
        
        printf("Correct answer is %d, your answer was %d.\n", x /= y, userAnswer);

    
        printf("3) %d  %%=  %d = ", x, y);
        scanf("%d", &userAnswer);
        
        printf("Correct answer is %d, your answer was %d.\n", x %= y, userAnswer);

        
        printf("4) %d += %d = ", x, y);
        scanf("%d", &userAnswer);
        
        printf("Correct answer is %d, your answer was %d.\n", x += y, userAnswer);

        
        printf("5) %d -= %d = ",  x, y);
        scanf("%d", &userAnswer);
        
        printf("Correct answer is %d, your answer was %d.\n", x -= y, userAnswer);

        
        printf("6) %d *= ++%d = ",  x, y);
        scanf("%d", &userAnswer);
        
        printf("Correct answer is %d, your answer was %d.\n", x *= ++y, userAnswer);

        
        printf("7) %d /= %d--= ",  x, y);
        scanf("%d", &userAnswer);
        
        printf("Correct answer is %d, your answer was %d.\n", x /= y--, userAnswer);


        printf("8) %d %%= --%d = ",  x, x);
        scanf("%d", &userAnswer);
        
        printf("Correct answer is %d, your answer was %d.\n", x %= --x, userAnswer);


        printf("9) %d += --%d = ", x, y);
        scanf("%d", &userAnswer);
        
        printf("Correct answer is %d, your answer was %d.\n", x += --y, userAnswer);


        printf("10) %d -= %d++ = ", x, y);
        scanf("%d", &userAnswer);
        
        printf("Correct answer is %d, your answer was %d.\n", x -= y++, userAnswer);


        printf("11) (%d %%= %d) || (%d /= %d--) = ", y, y, x, x);
        scanf("%d", &userAnswer);
        
        printf("Correct answer is %d, your answer was %d.\n", (y %= y) || (x /= x--), userAnswer);



    return 0;
    }