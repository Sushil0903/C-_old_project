#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int a, b;
    Base(int x, int y) : a(x), b(y) {}
    int sum() { return a + b; }
};

class Derived1 : public Base {
public:
    int c;
    Derived1(int x, int y, int z) : Base(x, y), c(z) {}
    int sum() { return Base::sum() + c; }
};

class Derived2 : public Base {
public:
    int d;
    Derived2(int x, int y, int z) : Base(x, y), d(z) {}
    int sum() { return Base::sum() + d; }
};

class Hybrid : public Derived1, public Derived2 {
public:
    Hybrid(int x, int y, int z, int w) : Derived1(x, y, z), Derived2(x, y, w) {}
    int sum() { return Derived1::sum() + Derived2::sum() - Base::sum(); }
};

int main() {
    Hybrid h(10, 20, 30, 40);
    cout << "Sum of four numbers: " << h.sum() << endl;
    return 0;
}