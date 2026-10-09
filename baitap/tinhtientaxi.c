#include <stdio.h>

int main()
{
    int sokm,tong;
    printf("nhap so km can di: ");
    scanf("%d", &sokm);

    if (sokm <= 1)
    {
        tong=(sokm*16000)*1.05;
    }else if (sokm >= 2 && sokm <= 5)
    {
        tong=(((sokm-1)*12000)+16000)*1.05;
    }else 
    {
        tong=(((sokm-5)*10000)+16000+48000)*1.05;
    }
     
    
    printf("so tien can phan tra la : %d",tong);
    return 0;
}