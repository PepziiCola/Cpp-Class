/*
Problem 1. Dealing with a file

Make a program that will read integer numbers the user introduces until the user enters -1.
The numbers must be written to the file “numbers.txt”. The program must close the file and then open it again for reading.
The program must read the numbers from the file, display them on the screen, and close the file again.
 **/
//DO NOT MODIFY THIS SECTION
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream ofile;
    ifstream ifile;
    int number;
    cout << "Enter positive integers. When done, enter -1\n";
    ofile.open( "numbers.txt" );
    //WRITE YOUR CODE FROM HERE

    while (number != -1) {
        cin >> number;
        if (number == -1) break;
        else ofile << number << endl;
    }

    ofile.close();
    ifile.open( "numbers.txt" );

    cout << "Numbers from file are: " << endl;
    while (ifile >> number) {
        cout << number << endl;
    }

    ifile.close();
}

