//to print all the divisor of number n

#include <iostream>
using namespace std;

int divisor(int n);

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  divisor(n);
  return 0;
}

int divisor(int n) {
  cout << "Divisors of " << n << " are: ";
  // Loop through all numbers from 1 to n
  for (int i=1; i<=n; i++) {
    if (n%i ==0) {
      cout << i << " "; // Print the divisor

    }

  }
  cout << endl; // Print a new line after all divisors
  return 0; // Return 0 to indicate successful execution
}