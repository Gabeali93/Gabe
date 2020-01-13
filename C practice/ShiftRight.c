/*  Name: Gabe Ali
    Date: 1/10/2020
    Project: This program takes a number and shifts its bit value to the right by 5 */


#include <stdio.h>

int main(){                                             //intializing main function
    int A, B;                                           //intialize variables
    printf("Enter number to shift: ");                  //print statement to prompt user
    scanf("%d", &A);                                    //places input to the 'A' variable
    A>>=5;                                              //shifts bit value of 'A' to the right by 5
    B=A;                                                //sends the new value of 'A' to the 'B' variable
    printf("\nNumber has been shifted to: %d\n", B);    //prints new value
    return 0;
}