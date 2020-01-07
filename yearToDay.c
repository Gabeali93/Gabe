/*Name: Gabe ali

Date: 1/7/2020

Project: Days to year
*/








#include <stdio.h>

int main()
{
    int days, years, weeks;

    /* Input total number of days from user */
    printf("Enter days: ");
    scanf("%d", &days);

    /* Conversion */
    years = (days / 365);   
    weeks = (days % 365) / 7;
    days  = days - ((years * 365) + (weeks * 7));

    /* Print all resultant values */
    printf("\n\n\nYEARS: %d\n", years);
    printf("WEEKS: %d\n", weeks);
    printf("DAYS: %d\n\n\n", days);

    return 0;
}