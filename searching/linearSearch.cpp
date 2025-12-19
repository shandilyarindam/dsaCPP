#include <bits/stdc++.h>
using namespace std;

// Linear Search: Check each element one by one
// Returns index if found, -1 otherwise

int linearSearch(const vector<int>& arr, int target) {   //arr is a reference to a constant vector of integers
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;  // Found at index i
        }
    }
    return -1;  // Not found
}

int main() {
    
    vector<int> arr = {4, 2, 7, 1, 9, 3};
    int target = 7;

    int result = linearSearch(arr, target);

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found" << endl;
    }

    // Output: Element 7 found at index 2
    return 0;
}