#include <stdio.h>
#include<stdlib.h>
// wap to calculate the sum of the digits of a number

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    while(n>0){
        int rem = n%10;
        sum +=rem;
        n/=10;
    }
    printf("Sum of input number is %d", sum);
}