// Task2: Student record management system
#include <iostream>
using namespace std;
 int main() {
    int roll, choice;
    string name;
    float marks;

    cout << "===== STUDENT RECORD MANAGEMENT =====\n";
    cout << "1. Add Student Record\n";
    cout << "2. Display Student Record\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter Roll Number: ";
            cin >> roll;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Marks: ";
            cin >> marks;

            cout << "\nRecord Added Successfully!\n";
            break;

        case 2:
            cout << "\nStudent Record Details\n";
            cout << "Roll Number: " << roll << endl;
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks << endl;
            break;
		default:
            cout << "Invalid Choice!";
    }

    return 0;
    }
