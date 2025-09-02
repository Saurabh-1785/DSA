#include <bits/stdc++.h>
using namespace std;

// ----------- O(n^2) Method -------------
void avgLong(vector<int> X, int n) {
  cout << "By O(n^2) Result: ";
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = 0; j <= i; j++) {
      sum += X[j];
    }
    cout << (double)sum / (i + 1) << " ";
  }
  cout << endl;
}

// ----------- O(n) Method ----------------
void avgShort(vector<int> X, int n) {
  cout << "By O(n) Result: ";
  int total = 0;
  for (int i = 0; i < n; i++) {
    total += X[i];
    cout << (double)total / (i + 1) << " ";
  }
  cout << endl;
}

int main() {
  string str_rn;
  cout << "Enter Roll Number: ";
  cin>>str_rn;
  int n;
  cout << "Enter size of given array: ";
  cin >> n;

  cout << "Enter elements of given array: ";
  vector<int> A(n);
  for (int i = 0; i < n; i++) cin >> A[i];
  
  cout << "Roll Number: "<< str_rn << endl;
  cout << "New Array X is" << endl;

  avgLong(A, n);      // O(n^2) method
  avgShort(A, n);  // O(n) method

  return 0;
}
