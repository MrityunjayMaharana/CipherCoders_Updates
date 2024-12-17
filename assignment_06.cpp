// assignment_06.cpp

/*
    Questions :- Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

    Example 1:

    Input: nums = [1,2,3,1]

    Output: true

    Explanation:

    The element 1 occurs at the indices 0 and 3.
*/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool containDuplicate(vector<int>& arr) {
    unordered_map<int, int> mp;
    for (int x : arr) {
        mp[x]++;
    }
    for (auto x : mp) {
        if (x.second >= 2) return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (containDuplicate(arr)) 
        cout << "Contains Duplicate." << endl;
    else 
        cout << "All Distinct values." << endl;
    return 0;
}
