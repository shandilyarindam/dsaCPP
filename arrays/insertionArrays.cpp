#include <iostream>
using namespace std;

int main(){

    int arr[] = {10, 20,30, 40, 50};

    int n = sizeof(arr) / sizeof(arr[0]);

    int pos = 2;
    int value = 25;

    for(int i = n; i > pos; i--){
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}