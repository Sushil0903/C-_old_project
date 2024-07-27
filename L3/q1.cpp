#include<iostream>
using namespace std;

class RBI{

    void roi()
    {
        cout<<"Rate of intrest of RBI 8.2";
    }

};
RBI rbi;

class SBI : public RBI{
    void roi()
    {
        cout<<"Rate of intrest of Sbi 8.5";
    }



};

class BOB : public RBI{
     void roi()
    {
        cout<<"Rate of intrest of BOB 7.5";
    }

};

class ICICI : public RBI{
     void roi()
    {
        cout<<"Rate of ICICI of RBI 8.0";
    }


};

int main()
{
    SBI rbi;
    rbi.::roi();
}