// return the array after removing duplicates

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
  int i = 0;
  for (int j=1; j<n; j++){
    if(arr[i] != arr[j]) {
      arr[i+1] = arr[j];
      i++;
    }
  }
  return i+1;
}

int main() {
  int n;
  cout << "Enter the number of elements in the array: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int nonDuplicateCount = removeDuplicates(arr, n);
  cout << "Array after removing duplicates: ";
  for (int i = 0; i < nonDuplicateCount; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}