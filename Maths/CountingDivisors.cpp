#include<bits/stdc++.h>
using namespace std;
#define ll long long 


ll A[1000010];//count of divisors for numbers from 1 to 1e6 stored in here 

int main(){
for(ll i=1;i<1000010;i++){
for(ll j=i;j<1000010;j+=i){
A[j]++;
}//incrementing the count of numbers of factors of i everytime with ++ like 1 2 3 ...
//when 2 comes then 2 ,4,6,8,10 all ka ++ and so one and in the output we return teh A[x] output 
}
ll t;cin>>t;
while(t--){
ll x;cin>>x;
cout<<A[x]<<endl;
}
return 0;
}