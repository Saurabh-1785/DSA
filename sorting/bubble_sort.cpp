// Swapping adjacent elements in an array using bubble sort

#include <iostream>
using namespace std; 

void bubble_sort(int arr[], int n) {
  for (int i = n-1;i>=0;i--) {
    int didSwap = false; // Flag to check if a swap was made
    for(int j = 0; j<=i-1; j++) {
      if(arr[j] > arr[j+1]) { //use < for descending order
        int temp = arr[j+1];
        arr[j+1] = arr[j]; 
        arr[j] = temp;
        didSwap = true;
      }
    }
    if (didSwap == false){ // if no swaps were made, the array is sorted
      cout << "Array is already sorted." << endl;
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
  return 0;
}