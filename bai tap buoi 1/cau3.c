/*Swap value of 2 integer variables. Answer by 2 solutions for this.
Example:

int a = 11;
int b = 23;
After swap we obtain: a = 23, b = 11*/
#include<stdio.h>
int main(){
    int temp;
    int a = 11;
    int b = 23;
    //swap
    temp = a;
    a = b;
    b = temp;
    //print a,b to output
    printf("a: %d\n", a);
    printf("b: %d", b);
    return 0;
}