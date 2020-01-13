#include <stdio.h>


int main(){

    int example = 0;

    printf("Enter an integer: ");
    scanf("%d", &example);

    if(example < 0)
    {
        printf(" Your number is negative");
    }
    else
    {
        printf("\noriginal number: %d\n", example);

        printf("Your number is now negative: %d\n", -1 * (example));
    }
    return 0;
}