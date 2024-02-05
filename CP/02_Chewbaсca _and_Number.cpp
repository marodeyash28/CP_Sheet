#include <bits/stdc++.h> 
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    //for first char
    int first = s[0]-'0'; //convert char to int;
    if(first==9){
        s[0]='9';
    }
    else{
        if(first>4){
            s[0]=((9-first)+'0'); // convert int to char;
        }
    }
    for(int i=1; i<s.size();i++){
        int rem=s[i]-'0';
        if(rem<5){
            continue;
        }
        else{
            s[i]=((9-rem)+'0');
        }
    }
    cout<<s;
}