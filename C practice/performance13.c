#include <stdio.h>

int main(){
    int var1, var2, var3 = 0;

    printf("Enter two seperate variables: ");
    scanf("%d %d", &var1, &var2);

    if(var1 == var2)
    {
        printf("ERROR\n");
    }
    else if(var1 > var2)
    {
        var3 = var1;
        printf("var1: %d\nvar2: %d\nvar3: %d\n");
    }
    else
    {
        var3 = var2;
        printf("var1: %d\nvar2: %d\nvar3: %d\n", var1, var2, var3);
    }
    return 0;
}