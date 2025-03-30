/*
//DO NOT MODIFY THIS SECTION
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
const int SIZE = 20;

//prototypes (INSERT HERE IF YOU USE FUNCTIONS)
void displayData(int lowest, int highest, int total, double average);

//end prototypes
int main() {
    ifstream ifile;
    string fileName;
    int lowest, highest, total = 0, counter = 0;
    int numbers[SIZE];
    double average;
    cout << "Name of file: ";
    cin >> fileName;
    ifile.open(fileName);
    if (ifile.fail()) {
        cout << "Error" << endl;
        return 1;
    }
    //ADD YOUR CODE FROM HERE

    while (ifile >> numbers[counter]) {
        total += numbers[counter];

        if (counter == 0) {
            lowest = numbers[counter];
            highest = numbers[counter];
        }

        if (numbers[counter] < lowest) lowest = numbers[counter];

        if (numbers[counter] > highest) highest = numbers[counter];

        counter++;
        if (counter >= SIZE) break;
    }

    displayData(lowest, highest, total, static_cast<double>(total) / counter);
    ifile.close();
}

void displayData(int lowest, int highest, int total, double average) {
    cout << "Lowest: " << lowest << endl;
    cout << "Highest: " << highest << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << fixed << setprecision(2) << average << endl;
}

/*
//DO NOT MODIFY THIS SECTION
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//prototypes
void modify1();
void displayStatistics();
void displayData();
void save();

//globals
int age1, age2, age3, option = 0;
string name1, name2, name3;
ifstream ifile;
ofstream ofile;
bool saved;

const int MAX = 50;
string names[MAX];
int ages[MAX];
int numStudents = 0;

int main() {
    ifile.open("students.txt");
    //ADD YOUR CODE FROM HERE, INCLUDE YOUR FUNCTIONS

    if (!ifile) {
      cout << "File not found, will be created when you save." << endl;
    } else {

    }

    ifile.close();
    ofile.open("students.txt");

    while (!saved) {
        cout << "Choose your option from below" << endl;
        cout << "(1) Add student" << endl;
        cout << "(2) Display statistics." << endl;
        cout << "(3) Print data." << endl;
        cout << "(4) Save data." << endl;
        cout << "Which option: ";
        cin >> option;

        switch (option) {
            case 1:
                modify1();
                break;
            case 2:
                displayStatistics();
                break;
            case 3:
                displayData();
                break;
            case 4:
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
    string name;
    int age;
    cout << "Enter student #1's name: ";
    getline(cin, name);
    cout << "Enter student #1's age: ";
    cin >> age;

    names[numStudents] = name;
    ages[numStudents] = age;
    numStudents++;

    ofile << age << " " << name << endl;
}

void displayStatistics() {
    if (numStudents == 0) {
        cout << "\nNo students to display.\n" << endl;
        return;
    }
    string oldestStudent = names[0], youngestStudent = names[0];
    int ageSum = 0, oldestAge = ages[0], youngestAge = ages[0];

    for (int i = 0; i < numStudents; i++) {
        ageSum += ages[i];

        if (ages[i] < youngestAge) {
            youngestAge = ages[i];
            youngestStudent = names[i];
        }

        if (ages[i] > oldestAge) {
            oldestAge = ages[i];
            oldestStudent = names[i];

        }
    }
    double agesAverage = static_cast<double>(ageSum) / numStudents;

    cout << "\nStatistics: " << endl;
    cout << "Average Age: " << fixed << setprecision(2) << agesAverage << endl;
    cout << "Oldest Student: " << oldestStudent << " (Age: " << oldestAge << ")" << endl;
    cout << "Youngest Student: " << youngestStudent << " (Age: " << youngestAge << ")\n" << endl;

}

void displayData() {
    if (numStudents == 0) {
        cout << "\nNo students to display.\n" << endl;
        return;
    }

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
