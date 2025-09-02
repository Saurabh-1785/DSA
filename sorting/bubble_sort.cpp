// Swapping adjacent elements in an array using bubble sort
// time complexity - O (n^2)
//space complexity - O (1)

#include <iostream>
using namespace std; 

void bubble_sort(int arr[], int n) {
  for (int i = 0; i < n-1; i++) { // since lat element would already be sorted
    int FLAG = 0; // Flag to check if a swap was made
    for(int j = 0 ; j < n-i-1; j++) {
      if(arr[j] > arr[j+1]) { //use < for descending order
        swap(arr[j], arr[j+1]);
        FLAG = 1;
      }
    }
    if (FLAG == 0){ // if no swaps were made, the array is sorted
      break;
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
  bubble_sort(arr, n);
  cout << "Sorted array: ";
  for (int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  cout<<endl;
  return 0;
}

/* DRY RUN
input = [5,2,7,3,8,1]  expected output = [2,3,5,7,8,1]
FLAG = 0
1.i=0 i.e i --> 5 
  j=0
  arr[0]>arr[1] --> 5>2 true =>swap
  [2,5,7,3,8,1] FLAG = 1
  j=1
  arr[1]>arr[2] --> 5>7 false => no swap
2. i=1 i.e i --> 5 
  j=0
  arr[0]>arr[1] --> 2>5 false => no swap
  j=1
  arr[1]>arr[2] --> 5>7 false => no swap
  j=2
  arr[2]>arr[3] --> 7>3 true =>swap
  [2,5,3,7,8,1] FLAG = 1
  j=3
  arr[3]>arr[4] --> 7>8 false => no swap
3. i=2 i.e i --> 5 
  j=0 
  arr[0]>arr[1] --> 2>5 false => no swap
  j=1
  arr[1]>arr[2] --> 5>3 true =>swap
  [2,3,5,7,8,1] FLAG = 1  
  j=2
  arr[2]>arr[3] --> 5>7 false 

and so on..... output array [1,2,3,5,7,8]


*/