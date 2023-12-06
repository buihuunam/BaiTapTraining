/*Write a function to swap value of 2 variables using pass-by-reference.
Example:
int a = 11, b = 23;
call function here: swap a, b
print a, b*/
#include<stdio.h>
void swap(int *a, int *b);

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x;
    int y;
    printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y);
    
    swap(&x,&y);
    printf("value of x is: %d\n", x);
    printf("value of y is: %d", y);
    return 0;
}