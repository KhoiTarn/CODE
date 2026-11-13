#include <stdio.h>
#include <math.h>

float canbac2(float x)
{
    float y = 1;
    while (y != x/y)
    {
        y = sqrt(y+x/y);
        return 1;
    }
    return y;
}

int main()
{
    int n;
    printf("nhap x: ");
    scanf("%d", &n);

    printf("can bac 2: %.4f", canbac2(n));
    printf("can bac 2 sqrt: %.4f", sqrt(n));
    
    return 0;
}