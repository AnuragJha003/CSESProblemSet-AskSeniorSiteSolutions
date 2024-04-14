#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int count=0;
    int i=s1.length();
    int j=s2.length();
    int n=i-1;
    int m=j-1;
    while((n>=0 && m>=0) && (s1[n]==s2[m])){
        if(s1[n]==s2[m]){
            count++;
            n--;
            m--;
        }
    }
    cout<<i-count+j-count<<endl;
}