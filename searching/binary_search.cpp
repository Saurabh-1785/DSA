#include <bits/stdc++.h>
using namespace std;

// Binary search function
int binarySearch(vector<int>& arr, int item) {
  int low = 0, high = arr.size() - 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] == item)
      return mid; // found
    else if (arr[mid] < item)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return -low - 1; // Not found → encoded insertion index
}

int main() {
  int n, item;
  cout << "Enter number of elements: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter " << n << " elements: ";
  for (int i = 0; i < n; i++) cin >> arr[i];

  cout << "Enter item to search: ";
  cin >> item;

  // Step 1: Sort array
  sort(arr.begin(), arr.end());

  cout << "Sorted Array: ";
  for (int x : arr) cout << x << " ";
  cout << endl;

  // Step 2: Binary search
  int pos = binarySearch(arr, item);

  if (pos >= 0) {
    // Found → delete
    cout << "Item " << item << " found at position " << pos << ". Deleting..." << endl;
    arr.erase(arr.begin() + pos);
  } else {
    // Not found → insert
    pos = -(pos + 1); // decode insertion index
    cout << "Item " << item << " not found. Inserting at position " << pos << "..." << endl;
    arr.insert(arr.begin() + pos, item);
  }

  // Step 3: Print updated array
  cout << "Updated Array: ";
  for (int i=0; i<arr.size(); i++) cout << arr[i] << " ";
  cout << endl;

  return 0;
}
