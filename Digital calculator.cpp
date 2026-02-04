// Task1:Digital Calculator
#include <iostream>
using namespace std;

int main() {
    int ch;
    double a, b;
	cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter your choice: ";
    cin >> ch;
	cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (ch) {
        case 1:
            cout << "Result = " << a + b;
            break;
        case 2:
            cout << "Result = " << a - b;
            break;
        case 3:
            cout << "Result = " << a * b;
            break;
        case 4:
            if (b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Division by zero not allowed";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}

