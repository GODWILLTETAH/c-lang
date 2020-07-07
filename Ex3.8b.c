#include <stdio.h> /* header file or preprocessor command*/

int main() /* main function*/
{
    int a, b, x, y, f;
    printf("a: _");
    scanf("%d", &a);
    printf("b: _");
        scanf("%d", &b);
    printf("x: _");
        scanf("%d", &x);
    printf("y: _");
        scanf("%d", &y);

    f = a*x+a*y+b*x+b*y;
    printf("f : = %d\n", f);
    return 0;
}

