#include <stdio.h>


int main(){
    

    int studentAges [4 + 1] = {0};

    int instructorAge = 42;

    studentAges [0] = instructorAge;

    studentAges [1] = 22;

    studentAges [2] = 21;

    studentAges [3] = 19;

    printf("\n\nClassroom ages: \n%d\n%d\n%d\n%d\n\n", studentAges[0], studentAges[1], studentAges[2], studentAges[3]);

    return 0;
}