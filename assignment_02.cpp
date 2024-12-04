#include <iostream>
using namespace std;

int main() {
    // 01: Find the largest of three numbers
    int num1, num2, num3;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    int largest = num1;
    if (num2 > largest) largest = num2;
    if (num3 > largest) largest = num3;

    cout << "The largest number is: " << largest << endl;

    // 02: Grade Calculation
    int score;
    cout << "Enter the score: ";
    cin >> score;

    cout << "Grade: ";
    if (score >= 90 && score <= 100) {
        cout << "A" << endl;
    } else if (score >= 80 && score <= 89) {
        cout << "B" << endl;
    } else if (score >= 70 && score <= 79) {
        cout << "C" << endl;
    } else if (score >= 60 && score <= 69) {
        cout << "D" << endl;
    } else if (score >= 0 && score <= 59) {
        cout << "F" << endl;
    } else {
        cout << "Invalid score." << endl;
    }

    // 03: Determine the month
    int month;
    cout << "Enter a number: ";
    cin >> month;

    cout << "The month is: ";
    switch (month) {
        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "February" << endl;
            break;
        case 3:
            cout << "March" << endl;
            break;
        case 4:
            cout << "April" << endl;
            break;
        case 5:
            cout << "May" << endl;
            break;
        case 6:
            cout << "June" << endl;
            break;
        case 7:
            cout << "July" << endl;
            break;
        case 8:
            cout << "August" << endl;
            break;
        case 9:
            cout << "September" << endl;
            break;
        case 10:
            cout << "October" << endl;
            break;
        case 11:
            cout << "November" << endl;
            break;
        case 12:
            cout << "December" << endl;
            break;
        default:
            cout << "Invalid input." << endl;
            break;
    }

    return 0;
}
