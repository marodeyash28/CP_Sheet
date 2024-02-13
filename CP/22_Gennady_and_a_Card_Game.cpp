#include <iostream>
using namespace std;

int main() {
  string s,x;
  cin>>s;

  char first = s[0];
  char second = s[1];
  for(int i=0; i<5; i++){
    cin>>x;
    if(x[0]==first || x[1]==second){
      cout<<"Yes";
      return 0;
    }
  }
  cout<<"No";
  return 0;
}