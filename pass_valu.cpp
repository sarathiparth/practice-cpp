#include<iostream>
using namespace std;

void swapvalue(int a , int b){
    int temp = a ;
    a = b;
    b = temp;
}

void swapbyref(int &a , int &b){
    int temp = a ;
    a = b;
    b = temp;
}

void swapbyadd(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

int main(){

    int x = 10 ;
    int y = 20 ;

    swapvalue(x,y);
    cout<<x<<" "<<y<<endl;

    swapbyref(x,y);
    cout<<x<<" "<<y<<endl;

    swapbyadd(&x,&y);
    cout<<x<<" "<<y<<endl;

    return 0;
}