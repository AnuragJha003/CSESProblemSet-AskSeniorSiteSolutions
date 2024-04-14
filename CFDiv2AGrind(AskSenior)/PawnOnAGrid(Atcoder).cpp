#include <bits/stdc++.h>
using namespace std;


int main(){
  int H,W,count;
  string S;
  count=0;
  cin >> H >> W;
  for(int i=0; i<H; i++){
    cin >> S;
    for(int j=0; j<W; j++){
      if(S.at(j)=='#'){
        count++;
      }
    }
  }
  cout << count << endl;
}
