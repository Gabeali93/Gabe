#include <stdio.h>
#include <math.h>
/* This program is used to show variable values and thier sizes
Name: Gabe Ali
date: 1/6/2020
project: perf_lab_1
*/

int main(void){
    //next four lines initializes variables and assign values
    int hackerNum = 50;
    float floNum = 88.3;
    double doubleTrouble = 32.32323232;
    char alpha = 'j';
    int thirtyThree = 33;
    //prints value of hackerNum
    printf("Your integer is %d \n", hackerNum);
    //prints the size in bytes of the variable
    printf("The size of your integer is %d \n", sizeof(hackerNum));
    printf("The integer represented as a float %f \n", hackerNum);
    printf("The integer represented as a char %c \n", hackerNum);
    printf("Your float is %f \n", floNum);
    printf("The size of your float is %d \n", sizeof(floNum));
    printf("The float represented as a double %lf \n", floNum);
    printf("Your double is %lf \n", doubleTrouble);
    printf("The size of your double is %d \n", sizeof(doubleTrouble));
    printf("The double represented as a float %f \n", doubleTrouble);
    printf("Your first is %c \n", alpha);
    printf("The char represented as an int %d \n", alpha);
    printf("The size of your character is %d \n", sizeof(alpha));
    printf("Int to char %c \n", thirtyThree);

    return 0;
}