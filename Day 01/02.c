//Write a program to determine if a number is prime

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    if(n<=2){
        printf("%d is a prime number", n);
    }
    else{
        int i;
        for (i=2;i<=sqrt(n);i++ ){
            if (n%i==0){
                printf("%d is not a prime number", n);
                break;
            }
        }
    
        if(i==sqrt(n)){
            printf("%d is a prime number",n);
        }
    }
    return 0;
}