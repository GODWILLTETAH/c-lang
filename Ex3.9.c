#include <stdio.h> /* header file or preprocessor command*/

int main() /* main function*/
{
    char x[20];
    printf("Please enter your name\n");
    scanf("%s", &x);
    printf("Greetings %s", x);
    return 0;
}

