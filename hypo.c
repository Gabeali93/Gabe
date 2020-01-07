#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){

    double a, b, h;

    printf("Enter the length of the first side: ");
    scanf("%lf", &a);
    printf("Enter the length of the first side: ");
    scanf("%lf", &b);


    h = sqrt(a*a +b*b);

    printf(" Length of Hypotenus %f\n", h);

    return 0;
    
    
    
    
    
    
    
    
    }