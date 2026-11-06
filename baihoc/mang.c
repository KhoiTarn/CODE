#include <stdio.h>

int main()
{
    int n;
    int a[100];

    printf("nhap kich thuoc mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] =  ", i);
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}