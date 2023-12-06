#include<stdio.h>
int main(){
    int arr[7]={1,3,4,5,3,2,1,0}, i = 0;
    while(i < 7){
        printf("cac gia tri trong mang la: %d\n", arr[i]);
        i++;
        if(i == 7){
            break;
        }
    }
    return 0;
}