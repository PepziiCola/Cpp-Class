/*
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
*/
