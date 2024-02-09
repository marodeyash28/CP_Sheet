#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    
    int maxi= 0;
    int mini= 110;
    int maxi_ind=0;
    int mini_ind=0;
    for(int i=1; i<=n; i++){
        if(arr[i]>maxi){
            maxi_ind=i;
            maxi=arr[i]; 
        }
        if(arr[i]<=mini){
            mini_ind=i;
            mini=arr[i];
        }     
    }
  int ans=0;
    if(maxi_ind>mini_ind){
      cout<<(maxi_ind)-1 + (n-mini_ind)-1;
    }
    else{
      cout<<(maxi_ind)-1 + (n-mini_ind);
    }
    return 0;
}