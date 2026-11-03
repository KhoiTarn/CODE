#include <stdio.h>
#include <math.h>

int main ()
{
    int sont, flag;
    printf("nhap so: ");
    scanf("%d",&sont);
    
    int tmp = sont;

    do
    {
        flag = 0;
        for (int i = 2; i <= sqrt(sont); i++)
        {
            if (sont % i == 0)
            {
                flag = 1;
            }
        }
        sont--;
    } while (flag == 1);
    
    if (tmp == sont + 1)
    {
        printf("%d la so nguyen to", tmp);
    }
    else
    {
        printf("%d khong phai so nguyen to\n", tmp);
        printf("so nt gan nhat cua %d", sont+1);
    }
    
    return 0;
}