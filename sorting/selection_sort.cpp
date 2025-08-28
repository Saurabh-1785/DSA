//Find the smallest lement in array and swaap it it with firstelement and then find next smallest element and swap it with second element and so on
//time complexity - O(n^2)
//space complexity - O(1)
#include <bits/stdc++.h>
using namespace std; 

void selection_sort(int arr[], int n) {
  for (int i=0;i<=(n-2);i++) {
    int min = i;
    for(int j = i; j<=n-1; j++) {
      if(arr[j] < arr[min]) { //use > for descending
        min = j;
      }
    }
    swap(arr[min], arr[i]);
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
  selection_sort(arr, n);
  cout << "Sorted array: ";
  for (int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  return 0;
}

/* DRY RUN
input = [5,2,7,3,6,1] output = [1,2,3,5,6,7]

1. i --> (0,n-2) => (0,4)
  i=0 --> 5:
  min=i=0
  j -->(0,n-1) => (0, 5)
  j=0:
    arr[0]<arr[0] false
    swap(5,5)
  j=1:
    arr[1]<arr[0] => 2< 5 true:
      min=j=1
    swap()
  
  
*/