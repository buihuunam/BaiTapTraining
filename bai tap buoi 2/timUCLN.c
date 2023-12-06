//viết chương trình tìm UCLN của 2 số nguyên
#include<stdio.h>
int main(){
    int a,b,i;
    printf("nhap a: ");
    scanf("%d", &a);
    printf("nhap b: ");
    scanf("%d", &b);
    if(a < b){
        for(i = a; i > 0; --i){
            if(a % i == 0 && b % i == 0){
                printf("UCLN cua %d va %d la: ",a,b);
                printf("%d",i);
                return i;
            }
        }
    } else {
        for(i = b; i > 0; --i){
            if(a % i == 0 && b % i == 0){
                printf("UCLN cua %d va %d la: ",a,b);
                printf("%d",i);
                return i;
            }
        }
    }
    return 0;
}