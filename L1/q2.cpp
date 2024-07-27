#include <iostream>
using namespace std;

int main() {
    int leapYears[10]; 
    int count = 0; 

    for (int year = 2020; year <= 3030; year++) {
        if (year % 4 == 0) {
            leapYears[count] = year;
            count++;
        }
    }

    cout << "Leap years =" << endl;
    for (int i = 0; i < count; i++) {
        cout << leapYears[i] << " ";
    }
    cout << endl;

    return 0;
}