/*
Problem 4. Geometry Calculator with functions and menu
Make a C++ program that calculates the area of different geometric shapes: circle, rectangle, and
triangle. The program should allow the user to choose a shape, enter the required dimensions, and
receive the computed area. All arguments should be passed by value.
Implement a loop to allow repeated calculations until the user chooses to exit.

It must have the following functions:
• displayMenu(): Displays a menu with options: Circle, Rectangle, Triangle, and Exit.

• calculateCircleArea(double): Accepts the radius as a parameter (by value) and returns the area
    using the formula:
        A=π×r2

• calculateRectangleArea(double, double): Accepts the length and width (by value) and returns
    the area using the formula:
        A=length×width

• calculateTriangleArea(double, double): Accepts the base and height (by value) and returns the
    area using the formula:
        A=1/2×base×height

• displayResult(double, std::string): Accepts the computed area and shape name (by value) and
    displays the result.
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

