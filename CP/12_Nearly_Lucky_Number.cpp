#include <iostream>
using namespace std;
 
int main() {
  long long n;
  cin>>n;
 
  int cnt=0;
 
  while(n != 0){
    int temp = n%10;
    if(temp == 4 || temp == 7){
      cnt++;
    }
    n=n/10;
  }
  if(cnt==4 || cnt==7){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}