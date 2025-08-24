#include <iostream>
using namespace std;

// Abstract Base Class
class Operation {
public:
    virtual double calculate(double a, double b) = 0; // Pure virtual function
};

// Derived Classes
class Addition : public Operation {
public:
    double calculate(double a, double b) override {
        return a + b;
    }
};

class Subtraction : public Operation {
public:
    double calculate(double a, double b) override {
        return a - b;
    }
};

class Multiplication : public Operation {
public:
    double calculate(double a, double b) override {
        return a * b;
    }
};

class Division : public Operation {
public:
    double calculate(double a, double b) override {
        if (b == 0) {
            cout << "Error: Division by zero not allowed!" << endl;
            return 0;
        }
        return a / b;
    }
};

// Calculator Class
class Calculator {
public:
    void menu() {
        int choice;
        double num1, num2;
        do {
            cout << "\n=== Calculator Menu ===" << endl;
            cout << "1. Addition" << endl;
            cout << "2. Subtraction" << endl;
            cout << "3. Multiplication" << endl;
            cout << "4. Division" << endl;
            cout << "5. Exit" << endl;
            cout << "Enter choice: ";
            cin >> choice;

            if (choice == 5) {
                cout << "Exiting Calculator. Goodbye!" << endl;
                break;
            }

            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            Operation* op = nullptr;

            switch (choice) {
            case 1: op = new Addition(); break;
            case 2: op = new Subtraction(); break;
            case 3: op = new Multiplication(); break;
            case 4: op = new Division(); break;
            default:
                cout << "Invalid choice!" << endl;
                continue;
            }

            cout << "Result: " << op->calculate(num1, num2) << endl;
            delete op; // Free memory

        } while (choice != 5);
    }
};

// Main Function
int main() {
    Calculator calc;
    calc.menu();
    return 0;
}
