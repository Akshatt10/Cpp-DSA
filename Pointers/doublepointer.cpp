#include<iostream>
using namespace std;
//void update(int **p){
/*
    //p=p+1;
    //changed? -> NO CHANGE BY THIS

    *p=*p+q;
    //changed?

    //**p=**p +1;
    //changed?

}*/
int main(){
    /*int i = 5;
    int *p=&i;
    int **p2=&p;

   cout<<"printing p "<< p<< endl;
    cout<<"address of p "<< &p<< endl;
    cout<<"value of p "<< *p2<< endl;

    //Value of i by different methods
    cout<<i <<endl;
    cout<<*p  <<endl;
    cout<<**p2  <<endl;

    //address of i 

    cout<<&i <<endl;
    cout<<p <<endl;
    cout<<*p2 <<endl;

    cout<<endl<<endl;
    cout<<"before"<<i<<endl;
    cout<<"before"<<p<<endl;
    cout<<"before"<<p2<<endl;
    update(p2);
    cout<<"after"<<i<<endl;
    cout<<"after"<<p<<endl;
    cout<<"after"<<p2<<endl;
    cout<<endl<<endl;
*/
 int arr[] = {11, 21, 13, 14};
 cout<< *(arr)<< " " << *(arr + 1)<< endl;
    return 0;
}