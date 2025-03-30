/*#include <iostream>
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
*/