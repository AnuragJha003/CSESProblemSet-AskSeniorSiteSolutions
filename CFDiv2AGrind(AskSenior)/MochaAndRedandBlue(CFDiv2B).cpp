#include <bits/stdc++.h>
using namespace std;
	int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        long long b;
        string s;
        cin>>b;
        cin>>s;
        for(long long j=1;j<b;j++){
            if(s[j]=='?' && s[j-1]!='?'){
                if(s[j-1]=='B')
                {
                    s[j]='R';
                }
                else{
                    s[j]='B';
                }
            }
        }
        if(s[b-1]=='?')
        {
            s[b-1]='R';
        }
        for(long long j=b-2;j>=0;j--){
            if(s[j]=='?'){
                if(s[j+1]=='B'){
                    s[j]='R';
                }
                else{
                    s[j]='B';
                }
            }
        }
        
        cout<<s<<endl;
    }
}


