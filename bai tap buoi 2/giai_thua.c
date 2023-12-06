//Calculate value of 7! (factorial 7) by 2 solutions (loop, goto).
#include<stdio.h>
int main(){
    long int n,i,c;
    printf("nhap n: ");
    scanf("%ld", &n);
    for(i = 1; i <n; i++){
        c = n *i;
    }
    printf("gia tri cua %ld! la: %ld", n,c);
    return 0;
}