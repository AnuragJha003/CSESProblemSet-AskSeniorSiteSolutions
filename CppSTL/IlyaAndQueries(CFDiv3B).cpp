#include<bits/stdc++.h>

using namespace std;

int main(){

    int m,l,r,cnt=0;

    int count[100005];
    string s;

    cin>>s>>m;

    for(int i=1;i<s.size();i++){

        if(s[i]==s[i-1])
            cnt++;

        count[i]= cnt;

    }

    while(m--){
        cin>>l>>r;
        cout<<count[r-1]-count[l-1]<<endl;
    }



    return 0;
}