/* find union of 2 sorted arrays
arr1[]=[1,1,2,3,4,5]
arr2[]=[2,3,4,4,5,6,7]
return arr[] = [1,2,3,4,5,6,7]
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> &arr1, vector<int> &arr2) {
  int n1 = arr1.size();
  int n2 = arr2.size();
  vector<int> unionArr;
  int i = 0, j = 0;
  while (i < n1 && j < n2) {
    if (arr1[i] < arr2[j]) {
      if (unionArr.size() == 0 || unionArr.back() != arr1[i]) {
        unionArr.push_back(arr1[i]);
      }
      i++;
    }
    else {
      if (unionArr.size() == 0 || unionArr.back() != arr2[j]) {
        unionArr.push_back(arr2[j]);
      }
      j++;
    }
  }
  while (i < n1) {
    if (unionArr.size() == 0 || unionArr.back() != arr1[i]) {
      unionArr.push_back(arr1[i]);
    }
    i++;
  }
  while (j < n2) {
    if (unionArr.size() == 0 || unionArr.back() != arr2[j]) {
      unionArr.push_back(arr2[j]);  
    }
    j++;
  }
  return unionArr;
}

int main() {

  int n1, n2;
  cout << "Enter the number of elements in the first array: ";
  cin >> n1;
  cout << "Enter the number of elements in the second array: ";
  cin >> n2;
  cout << "Enter elements of first sorted array: ";
  vector<int> arr1(n1);
  for (int i = 0; i < n1; i++) {
    cin >> arr1[i];
  }
  cout << "Enter elements of second sorted array: ";
  vector<int> arr2(n2);
  for (int i = 0; i < n2; i++) {
    cin >> arr2[i];
  }
  vector<int> unionArr = sortedArray(arr1, arr2);
  cout << "Union of two sorted arrays: ";
  for (int i = 0; i < unionArr.size(); i++) {
    cout << unionArr[i] << " ";
  }
  cout << endl;

  return 0;
}