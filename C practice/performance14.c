#include <stdio.h>

int main(){
    char operator;      //character variable for operator
    double num1, num2;      //variables for 2 operands
    printf("Enter the operator you wish to math with: \n");     //prompts user to input an operator to use
    scanf("%c", &operator);     //sets operator variable
    printf("Enter two numbers you want to math together: \n");      //prompts user to enter two numbers
    scanf("%lf %lf", &num1, &num2);       //sets operand values

    switch(operator){       //switch case that will calculate operand values based on operator value it is given by the user
    case '+':
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
        break;
    default:        //default statement to catch invalid inputs
        printf("Not a valid option!!!!!!!!!!!!!\n");

    }
    return 0;
}