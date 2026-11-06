#include <stdio.h>

int main()
{
    float vnd, usd;
    printf ("nhap so tien ban muon doi: ");
    scanf ("%f", &vnd);
    usd = vnd / 26100;
    printf("so tien ban nhan duoc sau khi doi la: %.2f$", usd);
    return 0;
}