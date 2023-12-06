//viết chương trình kiểm tra số chính phương
#include<stdio.h>
int main(){
    int n,i;
    printf("nhap n: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        if(i*i == n){
            printf("%d la so chinh phuong!",n);
            return n;
        }
    }
    printf("%d khong la so chinh phuong",n);
    return 0;
}