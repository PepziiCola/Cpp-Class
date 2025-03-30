/*
//DO NOT MODIFY THIS SECTION
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
*/

/*
//DO NOT MODIFY THIS SECTION
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//prototypes
void modify1();
void modify2();
void modify3();
void displayData();
void save();

//globals
int age1, age2, age3, option = 0;
string name1, name2, name3;
ifstream ifile;
ofstream ofile;
bool saved;

int main() {
    ifile.open("students.txt");
    //ADD YOUR CODE FROM HERE, INCLUDE YOUR FUNCTIONS

    ifile.close();
    ofile.open("students.txt");

    while (!saved) {
        cout << "Choose your option from below" << endl;
        cout << "(1) Modify student 1." << endl;
        cout << "(2) Modify student 2." << endl;
        cout << "(3) Modify student 3." << endl;
        cout << "(4) Print data." << endl;
        cout << "(5) Save data." << endl;
        cout << "Which option: ";
        cin >> option;

        switch (option) {
            case 1:
                modify1();
                break;
            case 2:
                modify2();
                break;
            case 3:
                modify3();
                break;
            case 4:
                displayData();
                break;
            case 5:
                save();
                break;
            default:
                cout << "Invalid input" << endl;
                break;
        }
    }
}

void modify1() {
    cin.ignore();
    cout << "Enter student #1's name: ";
    getline(cin, name1);
    cout << "Enter student #1's age: ";
    cin >> age1;
    ofile << age1 << " " << name1 << endl;
}

void modify2() {
    cin.ignore();
    cout << "Enter student #2's name: ";
    getline(cin, name2);
    cout << "Enter student #2's age: ";
    cin >> age2;
    ofile << age2 << " " << name2 << endl;
}

void modify3() {
    cin.ignore();
    cout << "Enter student #3's name: ";
    getline(cin, name3);
    cout << "Enter student #3's age: ";
    cin >> age3;
    ofile << age3 << " " << name3 << endl;
}

void displayData() {
    string line;
    ifile.open("students.txt");
    cout << "Data: " << endl;

    while (getline(ifile, line)) {
        cout << line << endl;
    }

    cout << endl;

    ifile.close();
}

void save() {
    ofile.close();
    saved = true;
    ofile.open("students.txt");
}
*/
