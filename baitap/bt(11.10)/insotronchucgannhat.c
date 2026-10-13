#include <stdio.h>

int main ()
{
    int sogoc, sodu, a;
    printf("kiem tra so tron chu gan nhat: ");
    scanf("%d", &sogoc);

    if (sogoc == 0 || sogoc < 0)
    {
        printf("vui long nhap lai so khac\n");
    }
    else if (sogoc/2 == 0 && sogoc/5 == 0)
    {
        printf("%d la so tron chuc", sogoc);
    }
    else 
    {
        printf("%d khong phai so tron chuc\n", sogoc);

        sodu = sogoc % 10;
        if (sogoc < 10)
        {
            printf("so tron chuc gan nhat la: 10");
        }
        else if (sodu >= 5)
        {
            a = 10 - sodu;
            printf("so tron chuc gan nhat la: %d", sogoc+a);
        }
        else 
        {
            printf("so tron chuc gan nhat la: %d", sogoc-sodu);
        }
    }
    
    return 0;
}