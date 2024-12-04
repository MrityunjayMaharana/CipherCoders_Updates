#include <iostream>
using namespace std;

/*
    Beginner level - Question - 02
    Ques 1. Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.

    Sample Input:- Enter the first number: 10
    Enter the second number: 20
    Enter the third number: 15

    Sample Output :- The largest number is: 20

    Ques 2. Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.
    Grade Criteria:
    A: 90-100
    B: 80-89
    C: 70-79
    D: 60-69
    F: 0-59
    Sample Input:- Enter the score: 85
    Sample Output:- Grade: B

    Ques 3. Write a C++ program that takes an integer as input from the user and prints the corresponding month of the year using a switch case statement. Assume 1 = January, 2 = February, ..., 12 = December.If integer is not from 1 to 12 then print invalid.

    Sample Input:-Enter a number : 5
    Sample Output :- The month is: May
*/

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
