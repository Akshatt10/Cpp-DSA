#include<iostream>
using namespace std;

void bubblesort(int *arr, int n){
    //base case
    if(n==1|| n==0){
        return;
    }


    //1 case
    for(int i =0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }

    }

    bubblesort(arr,n-1);
}

int main(){

    int arr[5] = {2,5,1,6,9};

    bubblesort(arr,5);

    for(int i =0; i<5; i++){
        cout<< arr[i]<<" ";
    }

    return 0;

}
