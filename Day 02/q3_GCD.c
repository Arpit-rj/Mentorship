#include <stdio.h>
#include<stdlib.h>
// wap to find the GCD of two numbers

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    int smallest;
    int gcd;
    if (a<b){
        smallest=a;
    }
    else{
        smallest=b;
    }
    for (int i = 1; i<=smallest; i++){
        if (a%i == 0 && b%i ==0){
            gcd  = i;
        }
    }


    printf("GCD of two numbers is %d", gcd);
}