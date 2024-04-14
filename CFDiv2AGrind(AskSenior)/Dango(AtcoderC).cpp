#include<bits/stdc++.h>
using namespace std;
const int N=200010;
#define int long long
char a[N];
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    int mx=0;
    for(int i=1;i<=n;i++){
       if(a[i]=='o')continue;
       int r=i+1;
       while(a[r]=='o'&&r<=n)r++;
       r--;
       mx=max(mx,r-i);
    }
    for(int i=n;i>=1;i--){
        if(a[i]=='o')continue;
        int r=i-1;
        while(a[r]=='o'&&r>=1)r--;
        r++;
        mx=max(mx,i-r);
    }
    if(mx)cout<<mx<<'\n';
    else cout<<-1<<'\n';
}