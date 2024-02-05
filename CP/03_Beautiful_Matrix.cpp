#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int row,col;
    int mat[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            int x;
            cin>>x;
            
            if(x==1){
                row=i;
                col=j;
            }
        }
    }
    
    int ans = abs(row-2)+abs(col-2);
    cout<<ans;
}