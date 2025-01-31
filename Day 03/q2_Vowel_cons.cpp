#include<iostream>
#include<string>
using namespace std;
// wap to find the number of vowels and consonants in a string

int main(){
    string str;
    cout<<"Enter a string: ";
    cin>> str;
    int no_of_vowels=0;
    int no_of_consonants=0;
    for (int i= 0;i<str.length();i++){
        if(str[i] =='a'||str[i] =='e'||str[i] =='i'||str[i] =='o'||str[i] =='u'||str[i] =='A'||str[i] =='E'||str[i] =='I'||str[i] =='O'||str[i] =='U'){
            no_of_vowels ++;
        }
        else{
            no_of_consonants++;
        }
    }
    cout<<"No pf vowels: "<<no_of_vowels;
    cout<<endl;
    cout<<"No pf Consonants: "<<no_of_consonants;

    return 0;
}