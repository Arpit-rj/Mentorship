//Write a program to check if a given number is armstrong or not

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int original_n = n;
    int sum = 0;
    while(n>0){
        int rem=0;
        rem = n%10;
        sum += rem*rem*rem;
        n/=10;
    }
    if (sum ==original_n){
        printf("%d is a armstrong number.", original_n);
    }
    else{
        printf("%d is not a armstrong number.", original_n);
    }

}