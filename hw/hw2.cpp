/*
Problem 1. Running the Race

Write a program that asks for the names of three runners and the time it took each of them to finish a race. The program should display who came in first, second, and third place.

Input Validation: Only accept positive numbers for the times.
 */
//DO NOT MODIFY THIS SECTION
#include <iostream>
using namespace std;
int main() {
    int cals, fatGrams, fatCalories;
    float fatPercent;
    //1. Input data
    cout << "How many calories and fat grams? ";
    cin >> cals >> fatGrams;
    //2. Validate input

    //ADD YOUR CODE FROM HERE

    // 1 gram of fat has 9 calories
    // calories from fat = fat grams * 9
    // % of calories from fat = calories from fat / total calories

    if (cals < 0 || fatGrams < 0) {
        cout << "Wrong number of calories or fat grams!" << endl;
        return 2321;
    }

    fatCalories = fatGrams * 9;

    if (fatCalories > cals) {
        cout << "Either the calories or fat grams were incorrectly entered" << endl;
        return 010;
    }

    fatPercent = static_cast<float>(fatCalories) / cals * 100;
    cout << "Fat percent is: " << fatPercent << "%" << endl;

    if (fatPercent < 18) {
        cout << "This food is low in fat." << endl;
    }
}

/*
Problem 2. Calories calculator (book Ch4-18)

Write a program that asks for the number of calories and fat grams in a food. The program should display the percentage of calories that come from fat.
If the calories from fat are less than 18% of the total calories of the food, it should also display a message indicating that the food is low in fat.

One gram of fat has 9 calories, so

Calories from fat = fat grams * 9

The percentage of calories from fat can be calculated as

Calories from fat ÷ total calories

Input Validation: Make sure the number of calories and fat grams are not less than 0. Also, the number of calories from fat cannot be greater than the total number of calories.
If that happens, display an error message indicating that either the calories or fat grams were incorrectly entered.
*/
//DO NOT MODIFY THIS SECTION
#include <iostream>
using namespace std;
int main()
{
    int t1, t2, t3;

    //ADD YOUR CODE FROM HERE

    string runner1, runner2, runner3;
    t1 = t2 = t3 = 0;

    cout << "Runner number 1: ";
    cin >> runner1;

    while (t1 <= 0) {
        cout << "Time (Positive): ";
        cin >> t1;
    }

    cout << endl << "Runner number 2: ";
    cin >> runner2;

    while (t2 <= 0) {
        cout << "Time (Positive): ";
        cin >> t2;
    }

    cout << endl << "Runner number 3: ";
    cin >> runner3;

    while (t3 <= 0) {
        cout << "Time (Positive): ";
        cin >> t3;
    }

    cout << endl;

    if (t1 < t2 && t1 < t3) {
        cout << "1st place: " << runner1 << " with time " << t1 << endl;
        if (t2 < t3) {
            cout << "2nd place: " << runner2 << " with time " << t2 << endl;
            cout << "3rd place: " << runner3 << " with time " << t3 << endl;
        } else {
            cout << "2nd place: " << runner3 << " with time " << t3 << endl;
            cout << "3rd place: " << runner2 << " with time " << t2 << endl;
        }
    } else if (t2 < t1 && t2 < t3) {
        cout << "1st place: " << runner2 << " with time " << t2 << endl;
        if (t1 < t3) {
            cout << "2nd place: " << runner1 << " with time " << t1 << endl;
            cout << "3rd place: " << runner3 << " with time " << t3 << endl;
        } else {
            cout << "2nd place: " << runner3 << " with time " << t3 << endl;
            cout << "3rd place: " << runner1 << " with time " << t1 << endl;
        }
    } else {
        cout << "1st place: " << runner3 << " with time " << t3 << endl;
        if (t1 < t2) {
            cout << "2nd place: " << runner1 << " with time " << t1 << endl;
            cout << "3rd place: " << runner2 << " with time " << t2 << endl;
        } else {
            cout << "2nd place: " << runner2 << " with time " << t2 << endl;
            cout << "3rd place: " << runner1 << " with time " << t1 << endl;
        }
    }
}

