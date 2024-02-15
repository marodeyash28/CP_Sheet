#include <iostream>
using namespace std;

int main() {
  int size;
  cin>>size;
  string s;
  cin>>s;
  string ans="";
  int i=0; int j=1;
  while(i<size){
    ans.push_back(s[i]);
    i=i+j;
    j=j+1;
  }
  cout<<ans;
}