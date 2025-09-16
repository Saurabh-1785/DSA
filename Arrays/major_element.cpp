// to find the elemnt in array which is more than n/2 times
/*
arr=[3,3,4,2,4,4,2,4,4]
output=4
because 4 is more than n/2 times
*/

// Optimal Solution- Moore's Voting Algorithm TC=O(n) SC=O(1)

#include <bits/stdc++.h>
using namespace std;  
int majorElement(vector<int> &arr) {
  int count = 0;
  int element;

  for(int i=0; i<arr.size(); i++) {
    if(count == 0) {
      count = 1;
      element = arr[i];
    }
    else if(arr[i] == element) {
      count++;
    } 
    else {
      count--;
    }
  }
  // to check if the element is actually the majority element
  int count1 = 0;
  for(int i=0; i<arr.size(); i++) {  
    if(arr[i] == element) { //
      count1++; // count1 is the count of the element found by Moore's Voting Algorithm
    }
  }
  if (count1 > arr.size()/2) {
    return element;
  }
  else {
    return -1;
  }
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
  int result = majorElement(arr);
  if (result != -1) {
    cout << "The majority element is: " << result << endl;
  } else {
    cout << "No majority element found." << endl;
  }
  return 0;
}