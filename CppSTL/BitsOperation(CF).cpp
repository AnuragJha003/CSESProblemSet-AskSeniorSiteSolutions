#include <bits/stdc++.h>
#include <string.h>
#define ll long long
#define tc int t; cin >> t; while(t--)
#define endl "\n"
#define loop(a, b, c) for(int i = a ; i < (b); i += c)
#define all(vec) vec.begin(),vec.end()
#define rall(vec) vec.rbegin(),vec.rend()
#define sz size()
#define Pair pair <int,int>
#define ll long long
#define ull unsigned long long
#define mod  1000'000'007
#define INF 2000'000'000
#define pi 3.14159
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define input freopen("stand.in","r",stdin);
#define output freopen("stand.out","w",stdout);
//#define dirx int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
//#define diry int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
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
    ll n,q,t,x;
    cin>>q>>n;
while(q--)
{
    cin>>t;
    if(t==1)
       {
           cin>>x;
           n=(n|x);
           cout<<n<<endl;
       }
    else if(t==2)
        {
           cin>>x;
           n=(n&x);
           cout<<n<<endl;
       }
    else if(t==3)
       {
           cin>>x;
           n=(n^x);
           cout<<n<<endl;
       }
    else if(t==4)
        {
            n=~n;
            cout<<(n)<<endl;
        }
}

return 0;
}
 