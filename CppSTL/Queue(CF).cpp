#include <bits/stdc++.h>
#define ll long long
#define tc int t; cin >> t; while(t--)
#define endl "\n"
#define all(v) v.begin(),v.end()
#define dd int n; cin>>n; int arr[n]; for(int i=0 ; i<n ; i++)cin>>arr[i];
using namespace std;
void abdo()
{

     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}


int main()
{
abdo();
int n;
cin>>n;
queue<int>ss;
int a;
string s;
for(int i=0 ; i<n ; i++)
{
    cin>>s;
    if(s=="push")
    {
        cin>>a;
        ss.push(a);
    }else if(s=="front")
    {
        cout<<ss.front()<<endl;
    }else if(s=="back")
    {
        cout<<ss.back()<<endl;
    }else if(s=="pop")
    {
        ss.pop();
    }
}

    return 0;
}