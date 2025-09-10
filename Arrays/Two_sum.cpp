#include <bits/stdc++.h>
using namespace std;

bool twoSum(vector<int> &arr, int n, int target){
  int i=0;
  int j=n-1;
  sort(arr.begin(), arr.end());
  while (i<j){
    int sum = arr[i] + arr[j];
    if (sum == target) {
      return true;
    }
    else if(sum < target) i ++;
    else j --;
  }
  return false;
}

// BRUTE FORCE APPROACH
// bool twoSum(vector<int> &arr, int n, int target){
//   for (int i= 0; i<n;i++){
//     for(int j=0;j<n;j++){
//       if (i!=j){
//         if (arr[i] + arr[j] == target) {
//           return true;
//         }
//       }
//     }
//   }
//   return false;
  
// }

int main() {

  int n;
  cout << "Enter the number of elements in the array: ";
  cin >> n;
  cout << "enter array elements: ";
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
      cin >> arr[i];
  }
  cout<< "enter target sum";
  int target;
  cin>>target;
  cout << twoSum(arr, n, target) << endl;
  return 0;

}