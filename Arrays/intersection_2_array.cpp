// intersection of 2 sorted array
//return all common elements in both arrays including duplicates
// arr1[] = [1,2,2,3,3,4,5,6]
// arr2[] = [2,3,3,5,6,6,7]
// return arr[] = [2,3,3,5,6]

#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionArray(vector<int> &arr1, vector<int> &arr2) {
  int n1 = arr1.size();
  int n2 = arr2.size();
  vector<int> intersectionArr;
  int i = 0, j = 0; //pointers for both arrays. initially i --> arr1[0] and j --> arr2[0]

  while (i < n1 && j < n2) {
    if (arr1[i] < arr2[j]) { // to compare elements of both arrays
        i++;
    }
    else if (arr1[i] > arr2[j]) {
        j++;
    }
    else { // when both are equal
        intersectionArr.push_back(arr1[i]);
        i++;
        j++;
    }
  }
  return intersectionArr;
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
  vector<int> intersectionArr = intersectionArray(arr1, arr2);
  cout << "Intersection of two sorted arrays: ";
  for (int i = 0; i < intersectionArr.size(); i++) {
    cout << intersectionArr[i] << " ";
  }
  cout << endl;

  return 0;
}

/* Dry Run:
1. arr1[] = [1,2,2,3,3,4,5,6]
   arr2[] = [2,3,3,5,6,6,7]
2. n1 = 8, n2 = 7
3. i = 0, j = 0, intersectionArr = []. also i --> arr1[0]=1 and j --> arr2[0]=2
4. while loop:
  i< n1 and j<n2 --> 0<8 and 0<7 --> true
    arr1[i] < arr2[j] --> 1<2 --> true
      i++ --> i=1
5. while loop:
  i< n1 and j<n2 --> 1<8 and 0<7 --> true
    arr1[i] < arr2[j] --> 2<2 --> false
    arr1[i] > arr2[j] --> 2>2 --> false
    else --> true
      intersectionArr.push_back(arr1[i]) --> intersectionArr = [2]
      i++,j++ => i=2, j=1
6. while loop:
  i< n1 and j<n2 --> 2<8 and 1<7 --> true
    arr1[i] < arr2[j] --> 2<3 --> true
      i++ --> i=3
7. while loop:
  i< n1 and j<n2 --> 3<8 and 1<7 --> true
    arr1[i] < arr2[j] --> 3<3 --> false
    arr1[i] > arr2[j] --> 3>3 --> false
    else --> true
      intersectionArr.push_back(arr1[i]) --> intersectionArr = [2,3]
      i++,j++ => i=4, j=2
  
  and so on... i = 8, j = 7 loop ends
  
7. return intersectionArr = [2,3,3,5,6]
*/