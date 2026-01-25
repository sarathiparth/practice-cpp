#include <iostream>
using namespace std;

int myMax(int x, int y) {
    return x > y ? x : y;
}

int myMin(int x, int y) {
    return x < y ? x : y;
}

int main() {
    int (*fp)(int, int);

    fp = myMax;
    cout << fp(10, 5) << endl;

    fp = myMin;
    cout << fp(46, 56) << endl;

    return 0;
}
