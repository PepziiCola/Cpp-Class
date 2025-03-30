/*
//DO NOT MODIFY THIS SECTION
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;
const int SIZE = 50;
//prototypes (INSERT HERE IF YOU USE FUNCTIONS)
//end prototypes
int main() {
    ifstream ifile;
    string fileName;
    float lowest, total = 0;
    vector<float> numbers;
    double average;
    cout << "Name of file: ";
    cin >> fileName;
    ifile.open(fileName);
    if (ifile.fail()) {
        cout << "Error, can't open " << fileName << endl;
        return 1;
    }
    //ADD YOUR CODE FROM HERE

    float num;
    while (ifile >> num) {
        if (num >= 10.0) {
            numbers.push_back(num);
        }
    }

    ifile.close();

    if (numbers.size() == 0) {
        cout << "No numbers greater than 10" << endl;
        return 1;
    }

    lowest = numbers[0];
    float greatest = numbers[0];
    for (float value: numbers) {
        total += value;
        if (value < lowest) lowest = value;
        if (value > greatest) greatest = value;
    }

    cout << "Name of file: " << fileName << endl;
    cout << "Lowest: " << fixed << setprecision(1) << lowest << endl;
    cout << "Total is " << fixed << setprecision(1) << total << endl;

    total += - lowest - greatest; // subtracting lowest and greatest from total
    average = total / (numbers.size() - 2); // subtracting two from size as we subtract lowest (1) and greatest (2)

    cout << "Special average is " << fixed << setprecision(3) << average << endl;
}
*/