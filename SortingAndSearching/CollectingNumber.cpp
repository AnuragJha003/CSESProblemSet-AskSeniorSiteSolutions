#include<bits/stdc++.h>
using namespace std;

int main(){
long long n;cin>>n;
//vector<long long> a(n);
vector<long long> pos(n+1);
for(int i=1;i<=n;i++){
long long x;cin>>x;
pos[x]=i;//position of elmnt x in array 
}
long long next=1,ans=1,curr=0;
while(next<=n){
if(pos[next]<curr){
ans++;
}//if smaller elmnt h that is we can not pick this in increasing order
curr=pos[next];//new current 
next++;//next++ moved ahead 
}
cout<<ans<<endl;
//for(int i=0;i<n;i++)
return 0;
}
