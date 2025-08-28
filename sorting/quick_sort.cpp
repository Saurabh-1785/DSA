// quick_sort
//time-complexity = O(nlogn)-----worst case may be O(n^2) 
//space-complexity = O(logn)-----worst case may be O(n)

//Quick sort => we will take first element as pivot and then we will partition the array in such a way that all elements smaller than pivot are on left side and all elements greater than pivot are on right side. Then we will recursively apply quick sort on left and right subarrays.
//This is a divide and conquer algorithm.

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
  int pivot = arr[low]; // first element is taken as pivot. Pivot is the element around which we will partition the array
  int i = low; // i will point to the first element of the array
  int j = high; // j will point to the last element of the array
  while (i < j) { // if i > j then we have partitioned the array
    while(arr[i] <= pivot && i<= high - 1) { // i will move from left to right until we find an element greater than pivot. For descending order, use >=
      i++; // increment i until we find an element greater than pivot
    }
    while(arr[j] > pivot && j>= low + 1) { // j will move from right to left until we find an element smaller than pivot
      j--; // decrement j until we find an element smaller than pivot
    }
    if (i<j) swap(arr[i], arr[j]); // if i is less than j then we will swap the elements at i and j. swap(arr[i], arr[j]) will swap the elements at index i and j
  }
  swap(arr[low], arr[j]); // after partitioning, we will swap the pivot element with the element at index j. This will place the pivot element in its correct position in the sorted array
  /* Now all elements to the left of j are smaller than pivot and all elements to the right of j are greater than pivot
  So, we will return j as the partition index.*/
  return j;
}

vector<int> quickSort(vector<int> &arr, int low, int high) {
  if (low < high) { // because if low=high => single element is there and it is already sorted
    int pIndex = partition(arr, low, high); // partition the array and get the partition index
    quickSort(arr, low, pIndex- 1);// recursively apply quick sort on left subarray (elements smaller than pivot)
    quickSort(arr, pIndex + 1, high);// recursively apply quick sort on right subarray (elements greater than pivot)
  }
  return arr;
}

int main() {
  cout << "Enter the number of elements in the array: ";
  int n;
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];

  }
  cout << "Sorted Array:";
  vector<int> sortedArr = quickSort(arr, 0, n-1); // low = index 0 and high=index last
  for (int i = 0; i < n; i++) {
    cout << sortedArr[i] << " ";
  }
  cout << endl;
  return 0;

}


/*DRY RUN

input = [5,2,7,3,8,1] output = [1,2,3,5,7,8]

low=0 -->5 high = n-1=5 -->1
  low<high 0<5 true :
    pIndex = partition (arr, 0,5)
  
      partition(arr,0,5) arr = [5,2,7,3,8,1]
        pivot = arr[0] = 5, i=0, j=5 low=0 high=5
        while i<j 0<5 true
          while arr[i]<=pivot 5<=5 true && i<=high-1 0<4 true:
            i++ i=1
          while arr[j]>pivot 1>5 false && j>=low+1 5>1 true--loop exit
          if i<j 1<5 true swap(arr[i],arr[j]) swap(2,1)
          arr = [5,1,7,3,8,2]

        while i<j 1<5 true 
          while 1<=5 true && 1<=4 true:
            i=2
          while 2>5 false --loop exit
          if 2<5 true swap(7,2)
          arr = [5,1,2,3,8,7]

        while 2<5 true:
          while 2<=5 true && 2<4 true:
            i=3
          while 7>5 true && j>=low+1 5>1 true:
            j-- j=4
          if 3<4 true swap(3,8)
          arr =[5,1,2,8,3,7]
        while 3<4 true:
          while 8<5 false --loop exit
          while 3>5 false --loop exit
          if 3<4 true swap(8,3)
          arr = [5,1,2,3,8,7]
        while 3<4 true:
          while 3<5 true 3<4 true
            i=4
          while 8>5 true 4>1 true:
            j=3
          if 4<3 false 
        while 4<3 false --loop exit arr= [5,1,2,3,8,7]
      
        swap(arr[low], arr[j])=> swap(arr[0], arr[3]) => swap(5,3)
        arr= [3,1,2,5,8,7]
        return j => return 3 

    pIndex = 3
    quickSort(arr, 0, 2):
      arr= [3,1,2,5,8,7] low = 0 high = 2
      pIndex = partition(arr,0,2)

        partition(arr,0,2):
          pivot=3 i=0 -->3 j=2 --> 2 low=0 high =2 :
          while i<j 0<2 true:
            while 3<=3 true and 0<=1 true:
              i=1
            while 2>3 false --loop exit
            if 1<2 true swap(1,2)
            arr=[3,2,1,5,8,7]

          while 1<2 true :
            while 2<=3 true and 1<=1 true:
              i=2
            while 1>3 false --loop exit
            if 2<2 false
          while 2<2 false --loop exit
        
        swap(arr[0],, arr[2]) => swap(3,1)
        arr= [1,2,3,5,8,7]
        return 2
      
      pIndex = 2
      quicksort(arr, 0, 1) -->same
      quickSort(arr, 4, 5)
      and so on ...
      arr = [1,2,3,5,7,8]
*/