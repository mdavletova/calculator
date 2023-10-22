
#include <iostream>
#include <cmath>
using namespace std;

void menu();
void sum();
void diff();
void prod();
void quot();
void power();
void sqrt();
void fact();
void matrix();

int main() {
    char choice;
    do {
        menu();
        cout << "Do u want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}

void menu() {
    cout << "Calculator\n\n";
    cout << "Menu\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power\n";
    cout << "6. Square root\n";
    cout << "7. Factorial\n";
    cout << "8. Matrix\n";
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    switch (choice) {
    case 1:
        sum();
        break;
    case 2:
        diff();
        break;
    case 3:
        prod();
        break;
    case 4:
        quot();
        break;
    case 5:
        power();
        break;
    case 6:
        sqrt();
        break;
    case 7:
        fact();
        break;
    case 8:
        matrix();
        break;
    default:
        cout << "Invalid choice\n";
    }
}

void sum() {
    double num1, num2;
    cout << "Enter two numbers to add: ";
    cin >> num1 >> num2;
    cout << "The sum is " << num1 + num2 << endl;
}

void diff() {
    double num1, num2;
    cout << "Enter two numbers to subtract: ";
    cin >> num1 >> num2;
    cout << "The difference is " << num1 - num2 << endl;
}

void prod() {
    double num1, num2;
    cout << "Enter two numbers to multiply: ";
    cin >> num1 >> num2;
    cout << "The product is " << num1 * num2 << endl;
}

void quot() {
    double num1, num2;
    cout << "Enter two numbers to divide: ";
    cin >> num1 >> num2;
    if (num2 == 0) {
        cout << "Error: division by 0\n";
    }
    else {
        cout << "The quotient is " << num1 / num2 << endl;
    }
}

void power() {
    double base, exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    cout << "The result is " << pow(base, exponent) << endl;
}

void sqrt() {
    double num;
    cout << "Enter a number to find the square root: ";
    cin >> num;
    if (num < 0) {
        cout << "Error: cannot find square root of negative number\n";
    }
    else {
        cout << "The square root is " << sqrt(num) << endl;
    }
}

void fact() {
    int num;
    cout << "Enter the number to find a factorial: ";
    cin >> num;
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    cout << "The factorial is " << result << endl;
}

void matrix() {
    const int rows = 3;
    const int cols = 3;
    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];
    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }
    cout << "The sum of the matrices is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}