/*
Problem 2. Weather Statistics
Write a program that uses a structure to store the following weather data for a particular month:
• Total Rainfall
• High Temperature
• Low Temperature
• Average Temperature
The program should have an array of 12 structures to hold weather data for an entire year. When the
program runs, it should ask the user to enter data for each month. (The average temperature should be
calculated.)

Once the data are entered for all the months, the program should calculate and display the average
monthly rainfall, the total rainfall for the year, the highest and lowest temperatures for the year (and
the months they occurred in) (use index), and the average of all the monthly average temperatures.

Input Validation: Only accept temperatures within the range between -100 and +140 degrees
Fahrenheit.

Problem 3. Multiple sentences and file
Modify the previous program so it will be able to read the data from a file or write to it if the user
requests it. Use a menu, for:
1) Read from the file
2) Read from the keyboard
3) Display data including calculated information.
4) Write to file
5) Exit
Example of file "weather.txt":
*/
#include <iostream>
#include <fstream>
using namespace std;

struct Weather {
    int rainfall;
    int hTemp;
    int lTemp;
    float avg;
};

const string fileName = "weather.txt";

//prototypes (USE ONLY IF YOU WILL USE FUNCTIONS)
void printMenu();
void readFromFile(Weather year[], bool &data);
void readFromKeyboard(Weather year[], bool &data);
void displayData(Weather year[], bool data);
void writeToFile(Weather year[], bool data);

int main() {
    //USE THIS DATA ONLY FOR TESTS.
    //THE DATA MUST BE INTRODUCED BY THE USER OR FROM FILE
    Weather year[12];
    ifstream ifile;
    int highest, lowest, totalRain = 0, fullAverage;
    float sumAvg = 0;
    //ADD YOUR CODE FROM HERE
    int highestMonth = 0, lowestMonth = 0, choice = 0;
    bool data = false;

    do {
        printMenu();
        cin >> choice;

        switch (choice) {
            case 1: {
                readFromFile(year, data);
                break;
            }
            case 2: {
                readFromKeyboard(year, data);
                break;
            }
            case 3: {
                displayData(year, data);
                break;
            }
            case 4: {
                writeToFile(year, data);
                break;
            }
            case 5: {
                cout << "Exiting." << endl;
                break;
            }
            default: {
                cout << "Enter 1-5" << endl;
            }
            break;
        }
    } while (choice != 5);
}

void printMenu() {
    cout << "\nMenu:\n";
    cout << "1) Read from the file\n";
    cout << "2) Read from the keyboard\n";
    cout << "3) Display data including calculated information\n";
    cout << "4) Write to file\n";
    cout << "5) Exit\n";
    cout << "Enter your choice: ";
}

void readFromFile(Weather year[], bool &data) {
    ifstream ifile(fileName);
    if (!ifile) {
        cout << "Can't open file \"" << fileName << "\"\n";
        return;
    }

    for (int i = 0; i < 12; i++) {
        ifile >> year[i].rainfall >> year[i].hTemp >> year[i].lTemp;
        year[i].avg = (year[i].hTemp + year[i].lTemp) / 2.0;
    }

    ifile.close();
    data = true;

}

void readFromKeyboard(Weather year[], bool &data) {
    for (int i = 0; i < 12; i++) {
        cout << "Enter rainfall, highest and lowest temperature for month #" << i + 1 << ": ";
        cin >> year[i].rainfall >> year[i].hTemp >> year[i].lTemp;

        while (year[i].hTemp < -100 || year[i].hTemp > 140 || year[i].lTemp < -100 || year[i].lTemp > 140) {
            cout << "Please enter values between -100 and 140: ";
            cin >> year[i].hTemp >> year[i].lTemp;
        }

        year[i].avg = (year[i].hTemp + year[i].lTemp) / 2.0;
    }

    data = true;
}

void displayData(Weather year[], bool data) {
    if (!data) {
        cout << "Enter data first.\n";
        return;
    }

    int highest, lowest, totalRain = 0, highestMonth = 0, lowestMonth = 0, sumAvg = 0;

    for (int i = 0; i < 12; i++) {

        totalRain += year[i].rainfall;
        sumAvg += year[i].avg;

        if (year[i].hTemp > highest) {
            highest = year[i].hTemp;
            highestMonth = i + 1;
        }

        if (year[i].lTemp < lowest) {
            lowest = year[i].lTemp;
            lowestMonth = i + 1;
        }

    }

    cout << "\nAverages of the year: " << endl;

    for (int i = 0; i < 12; i++) {
        cout << "\t" << year[i].avg << endl;
    }

    cout << "\nTotal rainfall: " << totalRain << endl;
    cout << "Highest temperature: " << highest << " on month #" << highestMonth << endl;
    cout << "Lowest temperature: " << lowest << " on month #" << lowestMonth << endl;
    cout << "Average temperature: " << sumAvg / 12 << endl;
}

void writeToFile(Weather year[], bool data) {
    if (!data) {
        cout << "Enter data then we can save.\n";
        return;
    }

    ofstream ofile(fileName);
    if (!ofile) {
        cout << "File \"" << fileName << "\" will not open\n";
        return;
    }

    for (int i = 0; i < 12; i++) ofile << year[i].rainfall << " " << year[i].hTemp << " " << year[i].lTemp << endl;

    ofile.close();
}
