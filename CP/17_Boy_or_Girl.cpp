#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin>>s;
  set<char> st;
  for(int i=0; i<s.size(); i++){
    st.insert(s[i]);
  }
  if(st.size()%2 == 0){
    cout<<"CHAT WITH HER!";
  }
  else{
    cout<<"IGNORE HIM!";
  }
}

//using sort()
// int main(){
//     string s;
//     cin>>s;
//     int count=0;
//     sort(s.begin(),s.end());
//     for(int i=1;i<s.length();i++){
//         if(s[i] != s[i-1]){
//             count++;
//         }
//     }
//     if(count%2 ==0){
//         cout<<"IGNORE HIM!";
//     }else{
//         cout<<"CHAT WITH HER!";
//     }
//     return 0;
// }