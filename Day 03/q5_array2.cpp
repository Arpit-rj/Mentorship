#include<iostream>
using namespace std;
// wap to find the sum of elements in an array

int main(){
    int array[5] ={1,2,3,4,5};
    int sum = 0;
    for (int i = 0; i<5;i++){
        sum+=array[i];
    }
    cout<<"Sum is: "<<sum<<endl;
    return 0;
}