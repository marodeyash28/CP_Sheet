#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;

  while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int cnt=0;
    while(a<=c && b<=c){
      if(a>=b){
        b=a+b;
        cnt++;
      }
      else{
        a=a+b;
        cnt++;
      }
    }
    cout<<cnt<<endl;

  }
}
