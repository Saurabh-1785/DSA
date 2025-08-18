// Perform calculation in given two matrices (+-/*)

#include <iostream>
using namespace std;

int main(){
  cout << "Enter number of rows and columns for Matrix 1: ";
  int r1, c1;
  cin >> r1 >> c1;
  cout << "Enter elements for Matrix 1:\n";
  int matrix1[r1][c1];
  for(int i = 0; i < r1; i++){
    for(int j = 0; j < c1; j++){
      cout << "Enter element at [" << i << "][" << j << "]: ";
      cin >> matrix1[i][j]; 
}