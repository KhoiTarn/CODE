#include <stdio.h>
#include <math.h>

int main ()
{
    int sont, flag = 0;
    printf("nhap so: ");
    scanf("%d",&sont);
    for (int i = 2; i <= sqrt(sont); i++)
    {
        if (sont % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("%d la so nguyen to", sont);
    }
    else
    {
        printf("%d khong phai so nguyen to", sont);
    }
    
    return 0;
}