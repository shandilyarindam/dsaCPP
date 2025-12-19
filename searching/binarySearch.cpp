#include <bits/stdc++.h>
using namespace std;

// Function to perform binary search
// Returns index if found, otherwise -1
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  // Safe way to calculate mid

        if (arr[mid] == target) {
            return mid;              // Target found
        }
        else if (arr[mid] < target) {
            left = mid + 1;          // Search in right half
        }
        else {
            right = mid - 1;         // Search in left half
        }
    }
    return -1;  // Target not found
}

int main() {
    vector<int> arr = {2, 3, 4, 10, 40, 50, 60, 70};  // Must be sorted!
    int target = 10;

    int result = binarySearch(arr, target);

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found" << endl;
    }

    // Test with target not present
    target = 25;
    result = binarySearch(arr, target);
    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found" << endl;
    }

    return 0;
}