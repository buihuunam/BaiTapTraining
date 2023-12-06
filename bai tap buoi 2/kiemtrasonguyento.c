//kiem tra so nguyen to
#include<stdio.h>
#include<math.h>
int kiemtra(int n){
    for(int i = 2; i < sqrt(n); i++){
        if(n%i == 0){
            printf("day khong phai so nguyen to");
            return 0;
        }
    }
    printf("day la so nguyen to!");
    return 1;
}
int main(){
    int n,c;
    printf("nhap n: ");
    scanf("%d", &n);
    if(n == 0 && n==1){
        printf("day khong phai so nguyen to");
    }
    else{
        c = kiemtra(n);
    }
    return 0;
}