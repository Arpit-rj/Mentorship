#include <stdio.h>
#include<stdlib.h>
// wap to find the LCM of two numbers

int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    int greatest;
    int LCM;
    if (a>b){
        greatest=a;
    }
    else{
        greatest=b;
    }
    for (int i = greatest; i<__INT_MAX__; i++){
        if (i%a == 0 && i%b ==0){
            LCM  = i;
            break;
        }
    }
    printf("LCM of two numbers is %d", LCM);
}