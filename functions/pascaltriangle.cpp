 //1
//11
//121
//1331
//14641

#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i =1; i<=n; i++){
        factorial = factorial*i;

    }
    return factorial;
    
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";

        }
        cout<<endl;
    }
    return 0;

}