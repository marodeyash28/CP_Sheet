#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin>>s;
  vector<int> arr;
  for(int i=0; i<s.size(); i=i+2){
    int crr = s[i] - '0';
    arr.push_back(crr);
  }
  sort(arr.begin(), arr.end());
  for(int i=0; i<arr.size(); i++){
    cout<<arr[i];
    if(i != arr.size()-1){
      cout<<"+";
    }
  }
}
