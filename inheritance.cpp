#include<iostream>
using namespace std;

class rectangle {
private:
    int length;
    int breadth;

public:
    rectangle(int l = 0, int b = 0) {
        length = l;
        breadth = b;
    }

    void setlength(int l) {
        length = l;
    }

    void setbreadth(int b) {
        breadth = b;
    }

    int getlength() {
        return length;
    }

    int getbreadth() {
        return breadth;
    }

    int area() {
        return length * breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }
};

class cube : public rectangle {
private:
    int height;

public:
    cube(int l = 0, int b = 0, int h = 0) : rectangle(l, b) {
        height = h;
    }

    int volume() {
        return getlength() * getbreadth() * height;
    }
};

int main() {
    cube c(4, 5, 6);
    cout << c.volume();
    return 0;
}
