//to check whether a number is armstrong or not. 
// An Armstrong number (also known as a narcissistic number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
// For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.

#include <iostream>
using namespace std;

int checkArmstrong(int n);

int main(){
  int n;
  cout<< "Enter a number: ";
  cin >> n;

  int is_armstrong= checkArmstrong(n);
  cout << is_armstrong << endl;

}

int checkArmstrong(int n) {
  int sum = 0, rem=0, temp = n;
  while (n>0){
    rem=n%10;
    sum+= rem*rem*rem; // Calculate the sum of cubes of digits // pow(rem, 3) can also be used
    n=n/10; // Remove the last digit from n
  }
  if (temp == sum) {
    return true; // The number is an Armstrong number
  } else {
    return false; // The number is not an Armstrong number
  }
  
}