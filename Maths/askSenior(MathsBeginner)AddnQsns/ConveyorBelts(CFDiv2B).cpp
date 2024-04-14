#include<bits/stdc++.h>
using namespace std;
#define ll long long 

const int MAXN = 1e3 + 5;

int ff(int x,int y,int n){
    x--;y--;
    x=min(x,n-x-1);
    y=min(y,n-y-1);
    return min(x,y);
}
void gg(){
    int n,x1,y1,x2,y2;cin>>n>>x1>>y1>>x2>>y2;
    cout<<abs(ff(x1,y1,n)-ff(x2,y2,n))<<endl;
}
bool isPossible(vector<int>& a, int x) {
    int n = a.size();
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        b[i] = a[i] ^ x;
    }
    int xor_all = 0;
    for (int i = 0; i < n; i++) {
        xor_all ^= b[i];
    }
    return (xor_all == 0);
}
int main() {
    int t;cin>>t;
    while(t--){
        //winner only once aa rha in the days 
        gg();
    }
}
/*for (int i = 0; i < n; i++) {
    cout << max_likes[i]<<" ";
}
cout<<endl;
for(int i=0;i<n;i++){
    cout<<min_likes[i]<<" ";
}
cout<<endl;
    }*/