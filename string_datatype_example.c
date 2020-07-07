#include <stdio.h> /* header file or preprocessor command*/

int main() /* main function*/
{
    char x[10], y[10];
    printf("enter first name\n");
    scanf("%s", &x);
    printf ("enter last name\n");
    scanf("%s", &y);
    printf ("your name is : %s\t",x);
    printf("%s", y);
    return 0;
}

