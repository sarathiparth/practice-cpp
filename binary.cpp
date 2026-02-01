#include<iostream>
using namespace std;

int main(){
    int x[5] = {1,2,34,56,77};
    int l = 0;
    int h = 4;
    int key = 6;

    while(l<=h){
        int mid = (l+h)/2;
        if(x[mid] == key){
            cout<<"elements is found";
            break;
        }
        else if(x[mid]>key){
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }

    if(l>h){
        cout<<"elements are not founded";
    }

    return 0;
}