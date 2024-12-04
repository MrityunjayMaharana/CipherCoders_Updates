#include <iostream>
#include <iomanip>
using namespace std;

/*
    Assigment: 01

    Beginner level - Question - 01
    Ques 1. Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.

    Sample Input :- Enter the first string: Hello
    Enter the second string: World

    Sample Output:- Concatenated string: HelloWorld

    Ques 2. Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.

    Sample Input:- Enter grade 1: 85
    Enter grade 2: 90
    Enter grade 3: 78
    Enter grade 4: 92
    Enter grade 5: 88

    Sample Output:- The average grade is: 86.6

    Ques 3. Write a C++ program that takes an integer as input from the user and outputs its square.

    Sample Input:- Enter a number: 7

    Sample Output :- The square of 7 is: 49
*/

int main() {
    // 01: String Concatenation
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    cout << "Concatenated string: " << str1 + str2 << endl;

    // 02: Average Grade Calculation
    int g1, g2, g3, g4, g5;
    cout << "Enter grade 1: ";
    cin >> g1;

    cout << "Enter grade 2: ";
    cin >> g2;

    cout << "Enter grade 3: ";
    cin >> g3;

    cout << "Enter grade 4: ";
    cin >> g4;

    cout << "Enter grade 5: ";
    cin >> g5;

    // Cast to double to ensure correct division
    double average = (g1 + g2 + g3 + g4 + g5) / 5.0;
    cout << fixed << setprecision(1); // Setting precision to 1 decimal place
    cout << "The average grade is: " << average << endl;

    // 03: Square of a Number
    int num1;
    cout << "Enter a number: ";
    cin >> num1;

    cout << "The square of " << num1 << " is: " << num1 * num1 << endl;

    return 0;
}
