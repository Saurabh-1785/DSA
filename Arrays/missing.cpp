/* given array of n-1 elements, find the missing one.
a=[1,2,4,5] missing=3
*/

#include <bits/stdc++.h>
using namespace std;

void Missing(const vector<int>& arr, int n){
  int sum1 = 0, sum2 = 0;
  for(int i=1; i<=n; i++){
    sum1 += i;
  }
  for(int i=0; i<n-1; i++){
    sum2 += arr[i];
  }
  cout << "missing: " << sum1 - sum2 << endl;
}

int main() {

  int n;
  cout << "Enter the number of elements in the array: ";
  cin >> n;
  cout << "enter array elements: ";
  vector<int> arr(n-1);
  for (int i = 0; i < n-1; i++) {
      cin >> arr[i];
  }
  Missing(arr, n);
  return 0;
}