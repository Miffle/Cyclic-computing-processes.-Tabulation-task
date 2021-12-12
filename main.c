#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, dx, a = 3, xn = 2, xk = 3, n = 15, i=1;
    dx = (xk-xn)/(n-1);
    x = xn;
    while (i <= n) {
        y = cos((sqrt(x) + sqrt(a) + 1)/(sqrt(a*x)));
        printf("%6.0f, x=%6.3f, y=%6.3f \n", i, x, y);
        i++;
        x +=dx;
    } 
    return 0;
}
