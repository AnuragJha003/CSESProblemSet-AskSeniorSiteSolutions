#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       string s;
       cin>>s;
        ll a=0;
        ll b[n];
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                a+=i;
                b[i]=n-1-2*i;
            }
            else
            {
                a+=(n-i-1);
                b[i]=(2*i+1-n);
            }
        }
        sort(b,b+n); 
        for(int i=n-1;i>=0;i--)
        {
            if(b[i]>0)
             a+=b[i];
             cout<<a<<" ";
        }
        cout<<endl;
   }
}