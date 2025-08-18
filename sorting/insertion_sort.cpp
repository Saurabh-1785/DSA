// swapping to left side 

#include <iostream>
using namespace std; 

void insertion_sort(int arr[], int n) {
  for (int i = 0; i<=(n-1); i++) {
    int j = i;
    while(j > 0 && arr[j-1] > arr[j]) { //use < for descending order
      // Swap the elements if they are in the wrong order
      int temp = arr[j-1];
      arr[j-1] = arr[j]; 
      arr[j] = temp;
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