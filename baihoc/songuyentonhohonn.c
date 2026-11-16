#include <stdio.h>
#include <math.h>


int sont(int n)
{
    if (n < 2) return 1;
    if (n == 2) return 0;
    
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 1;
        }
    }
    return 0;
}
void insont(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (0 == sont(i))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int n;
    printf("nhap vao so nt: ");
    scanf("%d", &n);
    
    insont(n);
    return 0;
}