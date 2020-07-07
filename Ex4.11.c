#include <stdio.h>
int main (){
float num1, num2;
int x;
printf("Enter number 1:");
scanf("%f", &num1 );
printf("Enter number 2:");
scanf("%f", &num2 );
printf("\tMathematical Opration");
printf("\n-------------------------------------");
printf("\n1 - Add\n2 - Subtract\n3 - Multiply\n4 - Divide");
printf("\n-------------------------------------");
back: printf(" \nEnter your preference:  ");
scanf("%d", &x);
switch (x)
{
    case 1:
printf("Answer : %f", num1 + num2);
    break;
    case 2:
printf("Answer : %f", num1 - num2);
    break;
    case 3:
printf("Answer : %f", num1 * num2);
    break;
    case 4:
printf("Answer : %f", num1 / num2);
    break;
default:
    goto back;
    }

return 0;
}
