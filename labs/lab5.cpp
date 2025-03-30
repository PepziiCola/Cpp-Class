/*
Problem 3. Menu-driven program with file and functions
In the lab of Chapter 5, we created a menu-driven program. Modify it so it will have functions for
each of the options, instead of having all the code in the main() function.
In the code, some variables must be globals, because their values need to be accessible from the
functions.
*/
#include <iostream>
#include <iomanip>
#include <cmath> // For pow function (if needed in extensions)
using namespace std;

// Function Prototypes
void displayMenu();
double calculateCircleArea(double radius);
double calculateRectangleArea(double length, double width);
double calculateTriangleArea(double base, double height);
void displayResult(string shape, double area);

int main() {
    int choice;
    double radius, length, width, base, height, area;
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        //ADD YOUR CODE FROM HERE, INCLUDE YOUR FUNCTIONS

        switch (choice) {
            case 1: {
                cout << "Enter the radius: ";
                cin >> radius;
                area = calculateCircleArea(radius);
                displayResult("circle", area);
                break;
            }
            case 2: {
                cout << "Enter the length: ";
                cin >> length;
                cout << "Enter the width: ";
                cin >> width;
                area = calculateRectangleArea(length, width);
                displayResult("rectangle", area);
                break;
            }
            case 3: {
                cout << "Enter the base: ";
                cin >> base;
                cout << "Enter the height: ";
                cin >> height;
                area = calculateTriangleArea(base, height);
                displayResult("triangle", area);
                break;
            }
            default: break;
        }
    } while (choice != 4);
    cout << "Goodbye!" << endl;
}

void displayMenu() {
    cout << "Geometry Calculator" << endl;
    cout << "1. Circle " << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Exit" << endl;
}

double calculateCircleArea(double radius) {
    return M_PI * pow(radius, 2);
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

void displayResult(string shape, double area) {
    cout << "The area of the " << shape << " is " << fixed << setprecision(2) << area << endl << endl;
}


