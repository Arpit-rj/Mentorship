#include <stdio.h>
#include<stdlib.h>
// wap to cpmpute the factorial of a number

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int original_n = n;
    int fact=1;
    while(n>0){
        fact*= n;
        n--;
    }
    printf("Factorial of %d is %d", original_n, fact);
}