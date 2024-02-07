#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[6]; // (1≤n≤10^4) arr[0,9,0,0,5,0]
    int cnt =0; int m=1;
    for(int i=1; i<6; i++){
      arr[i]= n%10;
      n=n/10;
      if(arr[i] != 0){
        cnt++;
      }
    }
    cout<<cnt<<endl;
    for(int i=1; i<6; i++){
      if(arr[i]!= 0){
        cout<<arr[i]*m<<" ";
      }
      m=m*10;
    }
    cout<<endl;
  }
}