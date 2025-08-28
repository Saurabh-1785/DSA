// swapping to left side 
// time complexity - O(n^2)
//space complexity - O(n)

#include <bits/stdc++.h>
using namespace std; 

void insertion_sort(int arr[], int n) {
  for (int i = 0; i<=(n-1); i++) {
    int j = i;
    while(j > 0 && arr[j-1] > arr[j]) { //use < for descending order
      // Swap the elements if they are in the wrong order
      swap(arr[j-1],arr[j]);
      j--; // Move to the left
    }
  }
}

int main(){
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  int arr[n];
  cout << "Enter elements of array: ";
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  insertion_sort(arr, n);
  cout << "Sorted array: ";
  for (int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  return 0;
}

/*DRY RUN

Input = [5,2,7,3,8,1]  expected output = [1,2,3,5,7,8]

1. i=0 i-->5
  j=0 j>0 -->false
2. i=1 i -->2
  j=i=1
  j>0 true and arr[0]>arr[1] => 5>2 true:
    swap(5,2)
    [2,5,7,3,8,1]
    j=0 loop exit
3. i=2 i-->7
  j=i=2
  j>0 true and 5>7 false --loop exit
4. i=3 i -->3
  j=3
  j>0 true and 7>3 true:
    swap(7,3)
    [2,5,3,7,8,1]
    j=2
  j>0 true and 5>3 true:
    swap(5,3)
    [2,3,5,7,8,1]
  j>0 true and 2>3 false -- loop exit

and so on....
  [1,2,3,5,7,8]
*/