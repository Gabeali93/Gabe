#include <stdio.h>

int main(){

    char S[20] = {0};

    printf("Input string here: ");
    scanf("%s", &S);

    if (S[0] >= 32 && S[0] <= 126)
    {
        printf("\n%s\n", S);
    }
    return 0;
}