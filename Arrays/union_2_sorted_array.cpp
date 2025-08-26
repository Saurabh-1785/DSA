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
  int i = 0, j = 0; //pointers for both arrays. initially i --> arr1[0] and j --> arr2[0]

  while (i < n1 && j < n2) {
    if (arr1[i] < arr2[j]) { // to compare elements of both arrays
      if (unionArr.size() == 0 || unionArr.back() != arr1[i]) { // condition 1 : check if unionArr is empty
        // condition 2 : check if last element of unionArr is not equal to arr1[i]
        // this is done to avoid duplicates in unionArr
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

  while (i < n1) { // if elements are remaining in arr1
    if (unionArr.size() == 0 || unionArr.back() != arr1[i]) {
      unionArr.push_back(arr1[i]);
    }
    i++;
  }

  while (j < n2) { // if elements are remaining in arr2
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

/*
Time Complexity: O(n1 + n2) where n1 and n2 are the sizes of the two arrays.
Space Complexity: O(n1 + n2) in the worst case when there are no common elements.
*/

/* Dry Run:

1. arr1[] = [1,1,2,3,4,5]
   arr2[] = [2,3,4,4,5,6,7]
2. n1 = 6, n2 = 7
3. i = 0, j = 0, unionArr = []. also i --> arr1[0]=1 and j --> arr2[0]=2
4. while loop:
  i< n1 and j<n2 --> 0<6 and 0<7 --> true
    arr1[i] < arr2[j] --> 1<2 --> true
      unionArr.size() == 0 || unionArr.back() != arr1[i] --> true || true --> true
        unionArr.push_back(arr1[i]) --> unionArr = [1]
      i++ --> i=1
  i< n1 and j<n2 --> 1<6 and 0<7 --> true
    arr1[i] < arr2[j] --> 1<2 --> true
      unionArr.size() == 0 || unionArr.back() != arr1[i] --> false || false --> false
      i++ --> i=2
  i< n1 and j<n2 --> 2<6 and 0<7 --> true
    arr1[i] < arr2[j] --> 2<2 --> false
      unionArr.size() == 0 || unionArr.back() != arr2[j] --> false || true --> true
        unionArr.push_back(arr2[j]) --> unionArr = [1,2]
      j++ --> j=1
  i< n1 and j<n2 --> 2<6 and 1<7 --> true
    arr1[i] < arr2[j] --> 2<3 --> true
      unionArr.size() == 0 || unionArr.back() != arr1[i] --> false || false --> false
      i++ --> i=3
  and so on...  i= 6 and j=5

5. after while loop:
  unionArr = [1,2,3,4,5] remaining arr1[]= [] remaining arr2[] = [6,7]
6. while (i < n1) --> false since i=6 and n1=6
  while (j < n2) --> true since j=5 and n2=7
    unionArr.size() == 0 || unionArr.back() != arr2[j] --> false || true --> true
      unionArr.push_back(arr2[j]) --> unionArr = [1,2,3,4,5,6]
    j++ --> j=6
  while (j < n2) --> true since j=6 and n2=7
    unionArr.size() == 0 || unionArr.back() != arr2[j] --> false || true --> true
      unionArr.push_back(arr2[j]) --> unionArr = [1,2,3,4,5,6,7]
    j++ --> j=7
  while (j < n2) --> false since j=7 and n2=7

7. return unionArr = [1,2,3,4,5,6,7]
*/