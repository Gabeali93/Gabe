#include <stdio.h>
#include <math.h>
/* This program is used to show variable values and thier sizes
Name: Gabe Ali
date: 1/6/2020
project: perf_lab_1
*/

int main(void){
    //next four lines initializes variables and assign values
    int hackerNum = 1337;
    float floNum = 88.3;
    double doubleTrouble = 32.32323232;
    char alpha = 'j';

    //prints value of hackerNum
    printf("Your integer is %d \n", hackerNum);
    //prints the size in bytes of the variable
    printf("The size of your integer is %d \n", sizeof(hackerNum));

    printf("Your float is %f \n", floNum);
    printf("The size of your float is %d \n", sizeof(floNum));

    printf("Your double is %lf \n", doubleTrouble);
    printf("The size of your double is %d \n", sizeof(doubleTrouble));

    printf("Your first is %c \n", alpha);
    printf("The size of your character is %d \n", sizeof(alpha));


    return 0;
}