#include <iostream>
using namespace std;

int main() {
  int limka, bob;
  cin>>limka>>bob;
  int cnt=0;
  while(limka<=bob){
    cnt++;
    limka=limka*3;
    bob=bob*2;
  }
  cout<<cnt;
}