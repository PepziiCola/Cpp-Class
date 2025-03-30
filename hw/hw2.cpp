/*
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
*/
/*

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
*/
