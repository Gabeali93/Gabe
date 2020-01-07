#include<stdlib.h>
#include<stdio.h>
#include <math.h>

int main(int argc, char **argv){

    double startingMileage, endingMilegae, ratePerMile;

    printf("enter starting mileage: ");
    scanf("%lf", &startingMileage);

    printf("enter starting mileage: ");
    scanf("%lf", &endingMilegae);

    printf("enter rate per mile: ");
    scanf("%lf", &ratePerMile);

    double totalMiles = endingMilegae - startingMileage;

    double reinbursement = totalMiles * ratePerMile;

    reinbursement = round(reinbursement * 100)/ 100;
    printf("you drove %f miles, at $%f per mile, you are owed $%.2f\n", totalMiles,
    ratePerMile, reinbursement);
    return 0;
}