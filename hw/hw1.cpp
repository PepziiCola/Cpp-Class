/*
Problem 1. Miles per gallon

A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program that calculates the number of miles per gallon the car gets. Display the result on the screen.

Hint: Use the following formula to calculate miles per gallon (MPG):

MPG = Miles_Driven/Gallons_of_Gas_Used

(Must start variables with lower case, and use proper indentation).
*/
#include <iostream>
using namespace std;

int main() {
    double carHold, carTravel, milesPerGalon;
    //ADD YOUR CODE FROM HERE

    carHold = 15;
    carTravel = 375;

    milesPerGalon = carTravel / carHold;

    cout << "There are " << milesPerGalon << " miles per gallon." << endl;
}


/*
Problem 2. Stock commission

Kathryn bought N shares of stock for $M per share. She must pay her stockbroker a 2 percent commission for the transaction. Write a program that calculates and displays the following:

The amount paid for the stock alone (without the commission)
The amount of the commission
The total amount paid (for the stock plus the commission)
The program will ask the user the values of N and M (remember to use lowercase variable names).
 **/
#include <iostream>
using namespace std;
const double BROKER_COMM=2.0;
int main()
{
    double shares, pricePerShare;
    double amountPaid, amountComm, totalPaid;
    //ADD YOUR CODE FROM HERE
    cout << "How many shares of stock? ";
    cin >> shares;

    cout << "How much per share? ";
    cin >> pricePerShare;

    amountPaid = shares * pricePerShare;
    amountComm = amountPaid * BROKER_COMM * 0.01;
    totalPaid = amountPaid + amountComm;

    cout << "\nThe ammount paid: $" << amountPaid << endl;
    cout << "The stockbroker's share: $" << amountPaid << endl;
    cout << "The total paid: $" << totalPaid << endl;
}

