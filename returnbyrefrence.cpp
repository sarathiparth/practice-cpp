#include<iostream>
using namespace std;

int &fun(int &b){
    cout<<b<<endl;
    return b;
}

int main(){
    int x = 100;
    fun(x) = 30;

    cout<<x<<" ";
    return 0;

}