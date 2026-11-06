#include <stdio.h>

int main()
{
    float pi = 3.1416, r;

    printf("vui long nhap ban kinh: ");
    scanf("%f", &r);

    float cv = 2*pi*r;
    float dt = pi*r*r;

    printf("dien tich cua hinh tron la %.2f",dt);
    printf("\nchu vi cua hinh tron la %.2f",cv);
    return 0;
}