#include<iostream>
#include<string>
using namespace std;
// wap to reverse a given string

int main(){
    string str;
    cout<<"Enter a string: ";
    cin>> str;
    string reverse;
    int len = str.length();
    for (int i= len-1;i>=0;i--){

        reverse+=str[i];
    }
    cout<<"String: "<<str<<endl;
    cout<<"Reversed string: "<<reverse;

    return 0;
}