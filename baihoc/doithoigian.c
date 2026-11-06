#include <stdio.h>

int main(){
    int h,m,s;
    printf("nhap so gio :");
    scanf("%d", &h);
    printf("nhap so phut :");
    scanf("%d", &m);

    s=((h*60)+m)*60;
    printf("so giay sau khi doi: %d",s);
    return 0;
}