#include <iostream>

class Number {

    int value;


    
    Number(int val) : value(val) {}

    // Overload < operator
    bool operator<(const Number& other) const {
        return value < other.value;
    }

    // Getter method to access the value
    int getValue() const {
        return value;
    }
};

int main() {
    // Create two Number objects
    Number num1(10);
    Number num2(20);

    // Compare the two objects using the overloaded < operator
    if (num1 < num2) {
        std::cout << "num1 (" << num1.getValue() << ") is less than num2 (" << num2.getValue() << ")" << std::endl;
    } else {
        std::cout << "num1 (" << num1.getValue() << ") is greater than or equal to num2 (" << num2.getValue() << ")" << std::endl;
    }

    return 0;
}