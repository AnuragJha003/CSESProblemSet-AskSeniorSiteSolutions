#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;cin>>n;
while(cin>>n){
    if(n%2||n<4)cout<<-1<<endl;
    else cout<<(n%6?(n/6)+1:n/6)<<" "<< n/4<<endl;
    
}
}