#include<iostream>
using namespace std;

int *fun(int size){
    int *p = new int[size];
    for(int i = 0 ; i < 5 ; i++){
        p[i] = i + 1;
        cout<<p[i]<<endl;
    }
    return p;
}

int main(){
    int *ptr = fun(5);

    delete []ptr;
    ptr = nullptr;
    return 0;

}