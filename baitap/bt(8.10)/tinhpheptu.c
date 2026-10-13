#include <stdio.h>
#include <math.h>

int main()
{   
    int a,b;
    char pheptinh;
    printf("nhap a: ");
    scanf("%d", &a);
    printf("nhap b: ");
    scanf("%d", &b);
    printf("nhap phep tinh: ");
    scanf(" %c", &pheptinh);

    if (pheptinh == '+') {
        printf("a + b = %d ",a+b);
    } else if (pheptinh == '-')
    {
        printf("a - b = %d",a-b);
    }else if (pheptinh == '*')
    {
        printf("a * b = %d",a*b);
    }
    else if (pheptinh == '/')
    {
        if (b == 0)
        {
            printf("khong the chia vi b = 0");
        }
        else{
            printf("a / b = %.2f",(float)a/b);
        } 
    }
    else if (pheptinh == '^'){
        printf("a ^ b = %.2f",pow(a,b));
    }
    else
    {
        printf("vui long nhap lai phep linh");
    }
    return 0;
}