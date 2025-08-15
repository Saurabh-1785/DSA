// quick_sort
//time-complexity = O(nlogn)-----worst case ay be O(n^2) 
//space-complexity = O(logn)-----worst case may be O(n)

//Quick sort => we will take first element as pivot and then we will partition the array in such a way that all elements smaller than pivot are on left side and all elements greater than pivot are on right side. Then we will recursively apply quick sort on left and right subarrays.
//This is a divide and conquer algorithm.

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
  int pivot = arr[low]; // first element is taken as pivot. Pivot is the element around which we will partition the array
  int i = low; // i will point to the first element of the array
  int j = high; // j will point to the last element of the array
  while (i < j) { // if i > j then we have partitioned the array
    while(arr[i] <= pivot && i<= high - 1) { // i will move from left to right until we find an element greater than pivot. For descending order, use >=
      i++; // increment i until we find an element greater than pivot
    }
    while(arr[j] > pivot && j>= low + 1) { // j will move from right to left until we find an element smaller than pivot
      j--; // decrement j until we find an element smaller than pivot
    }
    if (i<j) swap(arr[i], arr[j]); // if i is less than j then we will swap the elements at i and j. swap(arr[i], arr[j]) will swap the elements at index i and j
  }
  swap(arr[low], arr[j]); // after partitioning, we will swap the pivot element with the element at index j. This will place the pivot element in its correct position in the sorted array
  /* Now all elements to the left of j are smaller than pivot and all elements to the right of j are greater than pivot
  So, we will return j as the partition index.*/
  return j;
}

void qS(vector<int> &arr, int low, int high) {
  if (low < high) { // because if low=high => single element is there and it is already sorted
    int pIndex = partition(arr, low, high); // partition the array and get the partition index
    qS(arr, low, pIndex- 1);// recursively apply quick sort on left subarray (elements smaller than pivot)
    qS(arr, pIndex + 1, high);// recursively apply quick sort on right subarray (elements greater than pivot)
  }
}

vector<int> quickSort(vector<int> arr) {
  qS(arr, 0, arr.size() - 1); //(arr, low=0, high=size-1)
  return arr; // return the sorted array
}

int main() {
  cout << "Enter the number of elements in the array: ";
  int n;
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];

  }
  cout << "Sorted Array:";
  vector<int> sortedArr = quickSort(arr);
  for (int i = 0; i < n; i++) {
    cout << sortedArr[i] << " ";
  }
  cout << endl;
  return 0;

}
