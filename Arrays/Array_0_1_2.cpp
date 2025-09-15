// Sort an array of 0s, 1s and 2s Time Complexity: O(n) Space Complexity: O(1)
/*
arr=[0,1,2,0,1,2,0,1,2]
output=[0,0,0,1,1,1,2,2,2]
*/
#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int> &arr, int n) {
  int low = 0, mid = 0, high = n - 1;

  while (mid <= high) {
    switch (arr[mid]) {
      case 0:
        swap(arr[low++], arr[mid++]);
        break;
      case 1:
        mid++;
        break;
      case 2:
        swap(arr[mid], arr[high--]);
        break;
    }
  }
}

int main() {

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter array elements (only 0s, 1s and 2s): ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sortArray(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}