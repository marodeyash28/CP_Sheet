#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool isEasy=true;
    while(n--){
      int a;
      cin>>a;
      if(a != 0){
        isEasy=false;
      }
    }
    if(isEasy==true){
      cout<<"Easy";
    }
    else{
      cout<<"Hard";
    }
    return 0;
}