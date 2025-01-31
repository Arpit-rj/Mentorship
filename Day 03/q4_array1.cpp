#include<iostream>
#include<climits>
using namespace std;
// wap to find the largest and smallest number in an array

int main(){
    int array[5] ={4,7,1,8,5};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i<5;i++){
        if(array[i]<smallest){
            smallest =array[i];
        }
    }
    for (int j = 0; j<5;j++){
        if(array[j]>largest){
            largest =array[j];
        }
    }

    cout<<"Smalest: "<<smallest<<endl;
    cout<<"Largest: "<<largest;

    return 0;
}