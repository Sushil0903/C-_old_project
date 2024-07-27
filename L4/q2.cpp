#include <iostream>
using namespace std;

int main() {
    int choice;
    float num1, num2;
    char repeat;

    do {
        cout << "Basic Calculator" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            switch (choice) {
                case 1:
                    cout << "Addition is =" << num1 + num2 << endl;
                    break;
                case 2:
                    cout << "Subtraction is=" << num1 - num2 << endl;
                    break;
                case 3:
                    cout << "Multiplication is=" << num1 * num2 << endl;
                    break;
                case 4:
                        cout << "Division is=" << num1 / num2 << endl;
                    break;
                case 5:
                        cout << "Modulus is=" << (int)num1 % (int)num2 << endl;
                    break;
            }
        } else {
            cout << "Invalid Input" << endl;
        }
        cout << "Do you want to continue? (y/n): ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}