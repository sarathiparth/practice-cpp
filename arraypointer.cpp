#include<iostream>
using namespace std;

int main(){

    int size;
    cin>>size;
    int *p = new int[size];
    
    for(int i = 0;i<size;i++){
        p[i] = i + 2 ;
    }

    for(int j = 0 ; j<size;j++){
        cout<<p[j];
    }

    delete []p;
    p = nullptr;

    return 0;
}