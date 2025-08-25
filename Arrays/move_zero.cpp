//optimal sol- take one pointer at 0 and another at non zero and swap them
//time complexity = O(n) and space complexity = O(1)

#include <bits/stdc++.h>
using namespace std;

vector<int> moveZero(vector<int> &arr, int n){
  int j = -1; // initialised one pointer with -1 to indicate no zero found yet
  for (int i = 0; i < n; i++) {
    if (arr[i] == 0) { // if zero found
      j=i; // this pointer would be at 0 position
      break;
    }
  }
  if (j == -1) return arr; // if no zero found, return
  for (int i = j+1; i < n; i++) { // i would be at next element to 0
    if (arr[i] != 0) {
      swap(arr[i], arr[j]);
      j++;
    }
  }
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
  moveZero(arr, n);
  cout << "Array after left rotation: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;

}