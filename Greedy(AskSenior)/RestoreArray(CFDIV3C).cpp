#include<bits/stdc++.h>
using namespace std;

void gg(){
   int n;cin>>n;
   vector<int> b(n-1),a(n);
   for(int i=0;i<n-1;i++){
       cin>>b[i];
   }
   //int x=n;
   //vector<int> a(x);
   a[0]=b[0];//1st element toh same
   a[n-1]=b[n-2];
   for(int i=0;i<n-2;i++){
       a[i+1]=min(b[i],b[i+1]);
   }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
        gg();
    }
}