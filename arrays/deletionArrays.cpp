#include <iostream>
using namespace std;

int main(){

    int arr[] = {10, 20, 30, 40, 50};

    int n = sizeof(arr) / sizeof(arr[0]);

    int pos = 2;

    for(int i = pos; i < n -1; i++){
        arr[i] = arr[i+1];
    }

    n--;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
}