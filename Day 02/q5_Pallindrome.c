#include <stdio.h>
#include<stdlib.h>
// wap to check if a number is pallindrome

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int original_n = n;
    int rev = 0;
    while(n>0){
        int rem = n%10;
        rev = rev*10 + rem;
        n/=10;
    }
    if (rev == original_n){
        printf("The number is pallindrome");
    }
    else{
        printf("The number is not pallindrome");
    }
    
}