🧮 Object-Oriented Calculator (C++)


A console-based calculator application developed using Object-Oriented Programming (OOP) concepts in C++.
The project supports basic arithmetic operations such as addition, subtraction, multiplication, and division, with proper error handling (e.g., division by zero).

The application follows modular OOP design, ensuring reusability, maintainability, and abstraction.
User interacts via a menu-driven interface, making the calculator simple and intuitive.
✨ Key Features

🎛️ Menu-driven interface for smooth user interaction

🧩 Object-Oriented Approach (Encapsulation, Abstraction, Polymorphism)

🔄 Implemented using classes & inheritance

🧮 Basic Arithmetic Operations (Add, Subtract, Multiply, Divide)

⚠️ Error Handling for invalid inputs (e.g., division by zero)

🖥️ Console-based UI for lightweight execution
⚙️ Skills Used

C++ Programming

Classes & Objects

Inheritance & Polymorphism

Control Structures (switch-case, loops)

Exception/Error Handling

User Input/Output Handling
🚀 How to Run

Clone this repository:

git clone https://github.com/your-username/oop-calculator.git
cd oop-calculator


Compile the program using g++:

g++ calculator.cpp -o calculator


Run the executable:

./calculator

📂 Sample Code
class Operation {
public:
    virtual double calculate(double a, double b) = 0; // Abstract method
};

class Addition : public Operation {
public:
    double calculate(double a, double b) override {
        return a + b;
    }
};


(Full code is in calculator.cpp file)
📸 Sample Run
=== Calculator Menu ===
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
Enter choice: 1
Enter first number: 10
Enter second number: 20
Result: 30
