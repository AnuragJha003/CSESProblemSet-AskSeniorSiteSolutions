#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;

ll binexp(int base,int exp){
if(exp==0)return 1;
ll res=binexp(base,exp/2);
if(exp%2==1){
return (((res*res)%mod)*base)%mod;//if odd 
}
else{
return (res*res)%mod;
}
}
int gs(int base,int power){
ll num=(binexp(base,power+1)-1+mod)%mod;
ll deninverse=binexp(base-1,mod-2);
return (num*deninverse)%mod;
}

int main(){
int n;cin>>n;
vector<int> prime(n),exponent(n);
for(int i=0;i<n;i++){
cin>>prime[i]>>exponent[i];
}
ll nd=1;
for(int i=0;i<n;i++){
nd=(nd*(exponent[i]+1))%mod;
}
ll sd=1;
for(int i=0;i<n;i++){
sd=(sd* gs(prime[i],exponent[i]))%mod;
}
ll pd=1;
bool oddexp=false;
int posodd;
for(int i=0;i<n;i++){
if(exponent[i]%2==1){
oddexp=true;
posodd=i;
}
}
if(oddexp){
ll outexp=1;
for(int i=0;i<n;i++){
if(i==posodd) outexp=(outexp*(exponent[i]+1)/2)%(mod-1);
else outexp=(outexp*(exponent[i]+1))%(mod-1);
}
for(int i=0;i<n;i++){
pd=(pd*binexp(prime[i],(exponent[i]*outexp)%(mod-1)))%mod;
}
}
else{
ll outexp=1;
for(int i=0;i<n;i++){
outexp=(outexp*(exponent[i]+1))%(mod-1);
}
for(int i=0;i<n;i++){
pd=(pd*binexp(prime[i],((exponent[i]/2)*outexp)%(mod-1)))%mod;
}
}
cout<<nd<<" "<<sd<<" "<<pd;
return 0;
}