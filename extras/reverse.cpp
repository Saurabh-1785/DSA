//reverse a number

#include <iostream>
using namespace std;

int reverseNumber(int n);

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int reversed = reverseNumber(n);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}

int reverseNumber(int n) {
    int sum=0, reverse=0;

    while (n>0) {
      sum = n % 10; // Get the last digit
      reverse = reverse * 10 + sum; // Build the reversed number
      n = n / 10; // Remove the last digit from n
    }
    return reverse; // Return the reversed number
}