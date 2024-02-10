#include <iostream>
using namespace std;
 
int main() {
  int n;
  cin>>n;
  int arr[n][2];
  int sum=0; int maxi=0;
  bool sub = true;
  for(int i=0; i<n; i++){
    for(int j=0; j<2; j++){
      cin>>arr[i][j];
      if(sub == true){
        sum=sum-arr[i][j];
      }
      else{
        sum = sum+arr[i][j];
        maxi=max(sum, maxi);
      }
      sub = !sub;
    }
  }
  cout<<maxi;
}