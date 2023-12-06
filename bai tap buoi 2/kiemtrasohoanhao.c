//kiểm tra số hoàn hảo
#include<stdio.h>
int main(){
    int i,n;
    int temp = 0;
    printf("nhap n: ");
    scanf("%d",&n);
    for(i = 1; i < n; i++){
        //chạy từ 1 tới n
        if(n%i == 0){
            //nếu n%i == 0 thì
            temp += i;
        }
    }
    if(temp == n){
        printf("%d la so hoan hao!",n);
    } else {
        printf("%d khong la so hoan hao!",n);
    }
    return 0;
}