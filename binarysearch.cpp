#include<iostream>
using namespace std;

int main(){
    int a[6] = {1,4,9,66,88,99};
    int l = 0;
    int h = 5;
    int key;
    bool found = false;

    cin >> key;

    while(l <= h){
        int mid = (l + h) / 2;

        if(key == a[mid]){
            cout << "element is found";
            found = true;
            break;
        }
        else if(key > a[mid]){
            l = mid + 1;
        }
        else{
            h = mid - 1;
        }
    }

    if(!found){
        cout << "element is not found";
    }

    return 0;
}
