#include <stdio.h> /* header file or preprocessor command*/

int main() /* main function*/
{
    int R, SP, C, Result;
    char name [20];
    printf("Please what\'s your name?\n");
    scanf("%s", &name);
    printf("RATE :\n ");
    scanf("%d", &R);
    printf("SALES PRICE :\n");
    scanf ("%d", &SP);
    printf("COST :\n");
    scanf ("%d", &C);
    //Result = SP - C;
    //Result = R * Result;
    Result = R * (SP - C);
    //printf ("%s\n", name);
    printf ("Commission = %d \t", Result);
    return 0;
}

