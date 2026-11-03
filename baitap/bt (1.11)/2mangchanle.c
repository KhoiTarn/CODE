#include <stdio.h>

int main ()
{
    int a[100], chan[100], le[100], n;
    printf("nhap kich thuoc mang: ");
    scanf("%d", &n);

    int demchan = 0, demle = 0;

    for (int i = 0; i < n; i++)
    {

        printf("a[%d] =  ", i);
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            chan[demchan] = a[i];
            demchan++;
        }
        else
        {
            le[demle] = a[i];
            demle++;
        }
    }

    printf("mang chan gom: ");
    for (int i = 0; i < demchan; i++)
    {
        printf("%d ",chan[i]);
    }
    
    printf("\nmang le gom: ");
    for (int i = 0; i < demle; i++)
    {
        printf("%d ",le[i]);
    }
    return 0;
}