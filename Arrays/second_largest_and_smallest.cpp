// to find second largest and second smallest element in an array
/*Condition:
 1. ARRAY is non negative
 2. can have duplicate elements*/

#include <bits/stdc++.h>
using namespace std;

int secondLargest(const vector<int>& arr, int n){
  int largest = arr[0];
  int slargest = -1;// assuming non-negative numbers in array

  for (int i = 0; i<n;i++){
    if (arr[i]> largest) {
      slargest = largest;
      largest = arr[i];
    }
    else if(arr[i]<largest && arr[i] > slargest) {
      slargest = arr[i];
    }
  }
  return slargest;
}

int secondSmallest(const vector<int>& arr, int n){
  int smallest = arr[0];
  int ssmallest = INT_MAX;
  for( int i = 1; i<n; i++) {
    if (arr[i]< smallest) {
      ssmallest = smallest;
      smallest = arr[i];
    }
    else if (arr[i] != smallest && arr[i] < ssmallest) {
      ssmallest = arr[i];
    }
  }
  return ssmallest;
}


int main(){
  int n;
  cout << "enter size of array: ";
  cin>> n;
  cout << "enter the elements of array: ";
  vector<int> arr(n);
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  int slargest = secondLargest(arr, n);
  int ssmallest = secondSmallest(arr, n);

  cout << "Second largest and Second smallest elements are " << slargest << " and " << ssmallest;
  cout << endl;

  return 0;

}

