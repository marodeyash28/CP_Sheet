#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int i;
    cin>>i;
    int X=0;
    string s;
    while(i!=0){
        cin>>s;
        
        if(s=="X++" || s=="++X"){
            X++;
        }
        else{
            X--;
        }
        i--;
    }
    cout<<X;
    
}