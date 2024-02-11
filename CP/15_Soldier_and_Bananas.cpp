#include <iostream>
using namespace std;
 
int main() {
  int k,n,w;
  cin>>k>>n>>w;
  int total =0;
  for(int i=1; i<=w; i++){
    total = total + (k*i);
  }
  int borrow=0;
  if(n>total) borrow = 0;
  else{
    borrow = total-n;
  }
  cout<<borrow;
}