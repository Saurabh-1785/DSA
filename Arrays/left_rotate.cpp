#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    int temp = arr[0];
    for (int i = 0; i < n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp; // Place the first element at the end
    return arr;
}

int main() {

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter array elements: ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int rotateArray =  rotateArray(arr, n);
    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}