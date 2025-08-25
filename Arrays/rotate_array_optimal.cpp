/*
what we did earlier took O(d) space but if we want to do it in O(1) space we can do it by reversing the array.
We can do it in 3 steps:
1. reverse the first d elements of the array
2. reverse the remaining n-d elements of the array
3. reverse the whole array

e.g --> [1,2,3,4,5,6,7,8] and d=3
1. reverse the first d elements of the array
   [3,2,1,4,5,6,7,8]
2. reverse the remaining n-d elements of the array
   [3,2,1,8,7,6,5,4]
3. reverse the whole array
   [4,5,6,7,8,1,2,3]
*/

#include <bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n, int d) {
  d = d % n; // to handle cases where d > n
  reverse(arr,arr+d); // take O(d)
  reverse(arr+d, arr+n); // O(n-d)
  reverse(arr, arr+n); // O(n)
  // The overall time complexity is O(2n) and space complexity is O(1)
}

int main() {

    int n, d;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the number of positions to rotate: ";
    cin >> d;
    cout << "Enter array elements: ";
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    rotateArray(arr, n, d);
    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}