// Divide and merge array

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) { // for sorting the elements of merged array
  vector <int> temp; // defining empty variable array
  //[low..mid]
  //[mid+1....high]
  int left = low; // pointer at low (1st element of merged array) of 1st halved array
  int right = mid + 1; // pointer at 1st element of 2nd halved array
  while(left <= mid && right <= high) { 
    if(arr[left] <= arr[right]) { // compare elements of both array. use >= for descending order
      temp.push_back(arr[left]); // function to add element in vector list. add left element first
      left++; //because if left is small the pointer will shift to left +1
    }
    else {
      temp.push_back(arr[right]);//vice-versa
      right++;
    }
  }

  while(left <= mid) { // this is condition if 2st halved is already filled in empty elemnt but 1st halved elements are remaning. so we are pushing all elements at once
    temp.push_back(arr[left]);
    left++;
  }
  while(right <= high) {// this is condition if 1st half is already filled in empty elemnt but 2nd halved elements are remaning. so we are pushing all elements at once
    temp.push_back(arr[right]);
    right++;
  }

  for (int i = low; i <= high; i++) {//changing original array elements with temp array elements. 
    arr[i] = temp[i - low]; // temp start from index 0 while this subarray starts from index low. when i=low, temp=0 and when i= high, temp=high-low
  }


}

void mS(vector<int> &arr, int low, int high) { // take array, 1st index, last index
  if (low >= high) return; // base condition for recursive function 
  int mid = (low + high) / 2; // note that mid is int so it cant take floating number like 0.5,etc
  mS(arr, low, mid); // for first half (0 --> middle index)
  mS(arr, mid+1, high); // for second half (middle index+1 --> last index)
  merge(arr, low, mid, high);// sort both half
}

int main() {
  cout << "Enter array Size: "; // input the size of array
  int n;
  cin >> n;
  cout << "Enter elements of array: "; // input the elements of array
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  mS(arr,0, n-1); // function call to mergeSort()
  cout << "Sorted array: ";
  for (int i = 0; i < n; i++) { // output the sorted array
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;

}