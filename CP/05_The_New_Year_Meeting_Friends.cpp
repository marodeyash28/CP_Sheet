#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    
    int ans= (abs(x1-x2) + abs(x2-x3) + abs(x3-x1) )/2;
    cout<<ans;
}