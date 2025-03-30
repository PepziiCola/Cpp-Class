/*
//DO NOT MODIFY THIS SECTION
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Prototype
void coinToss();

int main() {
    int n, i;
    srand(time(nullptr));
    rand();
    rand();
    rand();

    cout << "How many times? ";
    cin >> n;
    //ADD YOUR CODE FROM HERE

    for (i = 0; i < n; i++) {
        coinToss();
    }
}

void coinToss() {
    if (rand() % 2 == 0) {
        cout << "Heads" << endl;
    } else {
        cout << "Tails" << endl;
    }
}
*/
