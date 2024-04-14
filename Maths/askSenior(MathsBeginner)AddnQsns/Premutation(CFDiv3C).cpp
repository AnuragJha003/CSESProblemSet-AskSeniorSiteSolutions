#include<iostream>
using namespace std;
const int N=110;
int a[N][N];
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
for(int i=1;i<=n;i++)
for(int j=1;j<n;j++)
cin>>a[i][j];

int s=a[1][1];
//s shows here the very first element in here 
if(s!=a[2][1])s=a[3][1];
cout<<s<<" ";
for(int i=1;i<=n;i++){
for(int j=1;j<n;j++) //if this set is not the same as the first elemnt means the set of characters which follow is the remaining character of the permutation 

if(a[i][1]!=s)cout<<a[i][j]<<" "; //new set of the n-2 elemnts as (s to already taken )
}
cout<<endl;
}

return 0;
}