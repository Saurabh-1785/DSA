/*
given the array and the number of elements in the array, rotate the array to the left by d positions.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &arr, int n, int d) {
  // if d is greater than n, we can take modulo of d with n
  d = d % n; // to handle cases where d > n

  //create a temporary list which store first d elements of the array
  vector<int> temp(d);
  for (int i = 0; i < d; i++) {
    temp[i] = arr[i];
  }

  // shift the elements of the array to the left by d positions. Start from d th index to n
  for (int i = d; i < n; i++) {
    arr[i - d] = arr[i]; //left rotation
  }

  //place the remaining elemets in remaining positions
  for (int i = n - d; i < n; i++) {
    arr[i] = temp[i - (n - d)]; //place the first d elements at the end
  }
  return arr;
}
int main() {

    int n, d;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the number of positions to rotate: ";
    cin >> d;
    cout << "Enter array elements: ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    rotateArray(arr, n ,d);
    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

//working of the code:

/*
1. lets take the array--> [1,2,3,4,5,6,7,8]

2. let d=3 --> i.e our required array should be => [4,5,6,7,8,1,2,3]

3. we creates a temporary array of size d and store the first d elements of the array in it.
   temp = [1,2,3]

4. now we shift the elements of the array to the left by d positions. we dit it by starting from d th index to n
   i.e we start from 3rd index and shift the elements to the left by d positions.
   arr = [4,5,6,7,8,6,7,8]

5. now we place the remaining elements in the remaining positions.
   i.e we place the first d elements at the end of the array.
   arr = [4,5,6,7,8,1,2,3]

   we did it by starting from n-d th index to n
   i.e we start from 5th index and place the first d elements at the end.

6. if d > n we can take modulo of d with n
   i.e we can do d = d % n to handle cases where d > n
*/

/* time complecity= O(d)+O(n-d)+O(d) = O(n+d)*/
/* space complexity = O(d) {since we are creating temp array of d elements}*/