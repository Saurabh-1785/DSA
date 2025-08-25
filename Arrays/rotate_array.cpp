/*
given the array and the number of elements in the array, rotate the array to the left by d positions.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &arr, int n, int d) {
  //create a temporary list which store first d elements of the array
  vector<int> temp(d);
  for (int i = 0; i < d; i++) {
    temp[i] = arr[i];
  }

  // shift the elements of the array to the left by d positions. Start from d th index to n
  for (int i = d; i < n; i++) {
    arr[i - d] = arr[i]; //left rotation
  }

  //place the remaining elemets in remaining positions
  for (int i = n - d; i < n; i++) {
    arr[i] = temp[i - (n - d)]; //place the first d elements at the end
  }
  return arr;
}
int main() {

    int n, d;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the number of positions to rotate: ";
    cin >> d;
    cout << "Enter array elements: ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    rotateArray(arr, n ,d);
    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}