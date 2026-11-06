#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a,&b);
    int cv = (a + b ) *2;
    int dt = a * b;
    printf(" chu vi: %d\ndien tich: %d", cv, dt);
    return 0;
}