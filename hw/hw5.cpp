/*
Largest/Smallest Array Values
Write a program that lets the user enter values into a vector until the user introduces -1.
The program should then display the largest and smallest values stored in the vector.

Larger Than n
In a program, write a function that accepts three arguments: a vector, and a number n . Assume that the vector contains integers.
The function should display all of the numbers in the vector that are greater than the number n. Do not pass the size of the vector.
*/
#include <iostream>
#include <vector>

using namespace std;

void largerThanN(vector<int>& values, int n) {
    cout << "Larger than " << n << ": ";
    for (int num : values) {
        if (num > n) cout << num << " ";
    }
}

int main() {
    vector<int> values;
    int value;

    cout << "Enter values. Enter -1 to end." << endl;
    while (true) {
        cin >> value;

        if (value == -1) break;

        values.push_back(value);
    }

    int smallest = values[0];
    int largest = values[0];

    for (int num : values) {
        if (num < smallest) smallest = num;
        if (num > largest) largest = num;
    }

    cout << "\nSmallest: " << smallest << endl;
    cout << "Largest: " << largest << "\n\n";


    int n;
    cout << "Enter a value for N (All numbers larger than N will be displayed): ";
    cin >> n;

    largerThanN(values, n);
}
