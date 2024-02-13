#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;

  int sum=1;
  int i=2;
  int cnt=0;
  int total=1;

  while(total<=n){
    sum=sum+i;
    total=total+sum;
    i=i+1;
    cnt++;
  }
  cout<<cnt;
}