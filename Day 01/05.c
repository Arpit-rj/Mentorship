//Write a program to generate a fibonacci series up to a given number

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    for (int i = 0; i<n; i++){
        if(t1<n){
            printf("%d ", t1);
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        
    }

}