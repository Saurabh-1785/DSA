#include <bits/stdc++.h>
using namespace std;

long long maxSubArraySum(vector<int> &arr) {
    long long max = INT_MIN, sum = 0;

    for (int i = 0; i < arr.size(); i++) {
      sum += arr[i];
      if (sum > max) {
        max = sum;
      }
      if (sum < 0) {
        sum = 0;
      }
    }
    return max;
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
  cout<<"Maximum subarray sum is: ";
  

    return 0;
}