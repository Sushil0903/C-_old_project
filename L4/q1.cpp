#include <iostream>
using namespace std;

inline int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
        
    }
    return fact;
}

int main() {
    int arr[100];
    int n;

    cout << "Enter the Size of the array=";
    cin >> n;

    cout << "Enter elements=" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Factorial of the elements are=" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Factorial of " << arr[i] << " is " << factorial(arr[i]) << endl;
    }

    return 0;
}