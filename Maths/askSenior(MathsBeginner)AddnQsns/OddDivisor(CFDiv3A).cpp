#include<bits/stdc++.h>
using namespace std;
int main(){int t;for(cin>>t;t;t--){long long int n;cin>>n;cout<<(((n&(n-1)) == 0)?("NO\n"):("YES\n"));}}
//keep dividing by 2 and in the end if we get 1 then it is not possible else we will get an odd divisor at the end if it exists 
while(n%2==0){
n=n/2;
}
if(n==1){no}//all even 
else{yes} //there exists an odd  