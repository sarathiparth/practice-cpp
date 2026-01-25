#include<iostream>
using namespace std;

void fun(){
    static int v = 0; //in this what happens it creates a memory space in code section when we call the fucntion again it wont get disappear 
    int a = 5;
    v++;
    cout<<a<<" "<<v<<endl;
}

int main(){
    fun();
    fun();
    fun();

    return 0;
}