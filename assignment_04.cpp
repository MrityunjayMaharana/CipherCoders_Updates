#include <iostream>
#include <vector>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

void findMinMax(vector<int>& arr, int& minEle, int& maxEle) {
    int n = arr.size();
    int i = 0;

    // Initialize min and max
    if (n % 2 == 0) {
        // If even number of elements, initialize with the first pair
        if (arr[0] > arr[1]) {
            maxEle = arr[0];
            minEle = arr[1];
        } else {
            maxEle = arr[1];
            minEle = arr[0];
        }
        i = 2; // Start from the 3rd element
    } else {
        // If odd number of elements, initialize with the first element
        maxEle = minEle = arr[0];
        i = 1; // Start from the 2nd element
    }

    // Process elements in pairs
    while (i < n - 1) {
        int localMax, localMin;

        // Compare the pair
        if (arr[i] > arr[i + 1]) {
            localMax = arr[i];
            localMin = arr[i + 1];
        } else {
            localMax = arr[i + 1];
            localMin = arr[i];
        }

        // Compare with global min and max
        if (localMax > maxEle) maxEle = localMax;
        if (localMin < minEle) minEle = localMin;

        i += 2; // Move to the next pair
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minEle = INT_MAX, maxEle = INT_MIN;

    // Function call to find min and max
    findMinMax(arr, minEle, maxEle);

    // Output results
    cout << "Minimum Element is: " << minEle << endl;
    cout << "Maximum Element is: " << maxEle << endl;

    return 0;
}
