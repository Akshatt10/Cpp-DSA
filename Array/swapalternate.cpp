#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";

    }cout<<endl;
}

void swapAlternate(int arr[], int size){
    for(int i = 0;i<size; i=i+2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
}
int main(){

    int even[6]= {4,6,5,2,5,6};
    int odd[5] = {4,2,5,6,7};

    swapAlternate(odd, 5);
    printArray(odd, 5);

    
}