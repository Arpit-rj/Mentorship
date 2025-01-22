//Write a program to check whether a number is even or odd

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n%2==0){
        printf("%d is even number",n);
    }
    else{
        printf("%d is odd number",n);
    }
}