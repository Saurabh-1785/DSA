#include <iostream>
using namespace std;

int isSorted(int A[], int n) {
    if (n == 1)
        return 1;
    if (A[n - 1] < A[n - 2])
        return 0;
    return isSorted(A, n - 1);
}

int main() {
    int n;

    cin >> n;

    int A[n];

    for (int i = 0; i < n; i++)
        cin >> A[i];

    if (isSorted(A, n))
        cout << "Array is sorted in non-decreasing order." << endl;
    else
        cout << "Array is NOT sorted." << endl;

    return 0;
}
