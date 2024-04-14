#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,a,b,res,sum;
    cin>>n>>a>>b;
    if(a==0){
        cout<<0;
        return 0;
    }
    else if(b==0){  
        cout<<n;
        return 0;
    }
    long long i=n/(a+b);
    res=a*i;
    sum=n%(a+b);
    while(sum){
        if(a<=sum){
            res+=a;
            sum=0;
        }
        else{
            res+=sum;
            sum=0;
        }
    }
    cout<<res;
    return 0;
}