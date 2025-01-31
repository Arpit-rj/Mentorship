#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
// wap to check if a string is pallindrome

int main(){
    char str[20];
    printf("Enter a string: ");
    gets(str);
    bool check = 1;
    int length = strlen(str);
    for (int i=0;i<length;i++){
        if (str[i] != str[length-1-i]){
            check = 0;
            break;
        }
    }
    if (check){
        printf("String is Pallindrome ");
    }
    else{
        printf("String is not Pallindrome ");
    }
    return 0;
}