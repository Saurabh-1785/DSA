#include <iostream>
using namespace std;


void TowerOfHanoi(int n, char frompeg, char topeg, char auxpeg) {
  // if only 1 disk, make move and return

  if (n==1){
    cout<<"Move disk 1 from peg "<<frompeg<<" to peg"<<topeg<< endl;
    return;
  }

  // Move top n-1 disks from A to B, using C as auxillary
  TowerOfHanoi(n-1, frompeg,auxpeg, topeg);

  // move remaing disc from A to C
  cout<<"\nMove Disk "<<n<<" from peg "<<frompeg<<" to peg "<<topeg<<endl;

  // Move n-1 disks from B to C using A as auxillary
  TowerOfHanoi(n-1, auxpeg, topeg, frompeg);
}

int main() {
  int n;
  cin >> n;
  
  TowerOfHanoi(n, 'A', 'C', 'B');  // A = source, C = destination, B = auxiliary
  return 0;
}
