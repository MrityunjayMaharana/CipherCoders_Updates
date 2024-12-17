/*
    Questions :- Given an array arr[] of n integers where arr[i] represents the number of chocolates in ith packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that:

    Each student gets exactly one packet.
    The difference between the maximum and minimum number of chocolates in the packets given to the students is minimized.
    Examples:

    Input: arr[] = {7, 3, 2, 4, 9, 12, 56}, m = 3
    Output: 2
    Explanation: If we distribute chocolate packets {3, 2, 4}, we will get the minimum difference, that is 2.


    Input: arr[] = {7, 3, 2, 4, 9, 12, 56}, m = 5
    Output: 7
    Explanation: If we distribute chocolate packets {3, 2, 4, 9, 7}, we will get the minimum difference, that is 9 – 2 = 7.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int findMinDiff(int m, int n, vector<int>& chocolates) {
    if (m == 0 || n == 0 || m > n) return -1; // Edge case: Not enough packets

    // Step 1: Sort the chocolates
    sort(chocolates.begin(), chocolates.end());

    int minDiff = INT_MAX;

    // Step 2: Check all subarrays of size m
    for (int i = 0; i <= n - m; i++) {
        int diff = chocolates[i + m - 1] - chocolates[i];
        minDiff = min(minDiff, diff);
    }

    return minDiff;
}

int main() {
    // Input number of students
    int m;
    cout << "Enter the number of students: ";
    cin >> m;

    // Input number of chocolate packets
    int n;
    cout << "Enter the number of chocolate packets: ";
    cin >> n;

    if (n < 1) {
        cout << "Invalid number of packets." << endl;
        return 0;
    }

    vector<int> chocolates(n);
    cout << "Enter the chocolates in each packet: ";
    for (int i = 0; i < n; i++) {
        cin >> chocolates[i];
    }

    // Find the minimum difference
    int res = findMinDiff(m, n, chocolates);

    if (res == -1) {
        cout << "Not enough packets." << endl;
    } else {
        cout << "The minimum difference is: " << res << endl;
    }

    return 0;
}
