#include<iostream>
using namespace std;

/*
    Beginner level - Question - 03
    Ques 1. Write a C++ program that takes an integer N as input from the user and calculates the sum of the first N natural numbers using a for loop.

    Sample Input:- Enter a number: 5
    Sample Output:- The sum of the first 5 natural numbers is: 15

    Ques 2. Write a C++ program that takes an integer N as input from the user and calculates the factorial of N using a loop.

    Sample Input:- Enter a number: 4
    Sample Output:- The factorial of 4 is: 24

    Ques 3. Write a C++ program that takes an integer N as input from the user and prints the multiplication table of N up to 10 using a loop.

    Sample Input:- Enter a number: 3

    Sample Output:-
    Multiplication table of 3:
    3 x 1 = 3
    3 x 2 = 6
    3 x 3 = 9
    3 x 4 = 12
    3 x 5 = 15
    3 x 6 = 18
    3 x 7 = 21
    3 x 8 = 24
    3 x 9 = 27
    3 x 10 = 30
*/

int main() {
    
    // 01
    int num1;
    cout << "Enter a number: ";
    cin >> num1;

    int sum = 0;
    for(int i=1; i<=num1; i++) {
        sum += i;
    }

    cout << " The sum of the first 5 natural numbers is: " << sum << endl;

    // 02
    int num2;
    cout << "Enter a number: ";
    cin >> num2;

    int i = num2;
    int fact = 1;
    while(i) {
        fact *= i;
        i--;
    }

    cout << " The factorial is: " << fact << endl;

    // 03
    int num3;
    cout << "Enter a number: ";
    cin >> num3;

    cout << "Multiplication table of " << num3 << ": " << endl;
    for(int i=1; i<=10; i++) {
        cout << num3 << " x " << i << " = " << num3*i << endl;
    }


    return 0;
}