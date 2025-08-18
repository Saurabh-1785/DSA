#include <bits/stdc++.h>
using namespace std;

bool isSorted(const vector<int>& arr, int n){
  for (int i = 1; i < n; i++){
    if(arr[i] >= arr[i-1]){
      return true;
    }
    else {
      return false;
    }
  }
}

int main() {

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "enter array elements: ";
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << isSorted(arr, n) << endl;
    return 0;
}