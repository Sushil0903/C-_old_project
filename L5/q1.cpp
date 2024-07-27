#include <iostream>
using namespace std;

class RBI
{


};

class SBI : public RBI
{
public:
    void getroi()
    {
        cout << "\nSBI BANK Interests :-8.5";
      
    }
} s;
class BOB : public RBI
{
public:
    void getroi()
    {
        cout << "\nBOB BANK Interests :-7.0";
      
    }
} b;
class ICICI : public RBI
{
public:
    void getroi()
    {
        cout << "\nICICI BANK Interests :-8.2";
       
    }
} i;

int main()
{
    cout << "Rate of interests of different banks :-\n";
    s.SBI::getroi();
    b.BOB::getroi();
    i.ICICI::getroi();
}