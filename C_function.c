#include <stdio.h> /* header file or preprocessor command*/

double rev (double x, double y)
{
 double r ;
 r = x * y;
 return r;
    }

int main() /* main function*/
{
    float x = 0, y = 0;
    float p ;
    printf ("enter price: \n");
    scanf("%f",&x);
    printf ("enter quantity: \n");
    scanf("%f",&y);
    p = rev (x,y);
    printf ("%f", p);
return 0;
}
