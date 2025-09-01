/*
arr = [1,1,0,1,1,1,0,1,1] return 3 since max 3 time 1 ocuurs together
*/

int maxOne(int arr, int n){
  int maxi=0;
  int cnt=0;
  for(int i=0;i<n;i++){
    if(arr[i] == 1){
      cnt++;
      maxi=max(maxi,cnt);
    }
    else{
      cnt = 0;
    }
  }
  return maxi;
}