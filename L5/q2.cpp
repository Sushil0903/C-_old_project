#include <iostream>
using namespace std;

class A
{
public:
    int a;
};
class B : public A
{
public:
    B()
    {
        cout << "Enter value of a = ";
        cin >> a;
    }
};
class C
{
public:
    int b;
    C()
    {
        cout << "Enter value of b = ";
        cin >> b;
    }
};
class D : public B, public C
{
public:
    void sum()
    {
        cout << "\nSum of:"<< a + b;
    }
} Sum;

int main()
{
    Sum.sum();
    return 0;
}
