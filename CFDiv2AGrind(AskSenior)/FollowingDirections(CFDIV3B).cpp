// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x=0,y=0;string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            y++;
        }else if(s[i]=='D'){
            y--;
        }else if(s[i]=='L'){
            x--;
        }else if(s[i]=='R'){
            x++;
        }
        if(x==1 and y==1){
            cout<<"YES\n";return ;
        }
    }cout<<"NO"<<"\n";
    
}
int main() {
    int t;
    cin>>t;while(t--)solve();
    return 0;
}