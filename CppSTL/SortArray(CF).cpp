#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main(){
    ll n;cin>>n;
    vector<ll> a(n);
	ll arr[100001]={0};
    for(ll i=0;i<n;i++) { cin>>a[i];arr[a[i]]++; }
    for(ll i=0;i<100001;i++){
		while(arr[i]>0){
			cout<<i<<"  ";
			arr[i]--;
		}
	}
}

//sort function is there theek 
#include <bits/stdc++.h>
#define ll long long
#define tc int t; cin >> t; while(t--)
#define endl "\n"
#define dd int n; cin>>n; int arr[n]; for(int i=0 ; i<n ; i++)cin>>arr[i];
using namespace std;
void abdo()
{

     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
static int i=0;
int main()
{
    abdo();
   int n;
   cin>>n;
   int arr[n];
   for(int i=0 ;i<n; i++)cin>>arr[i];
   sort(arr,arr+n);
   for(int i=0 ;i<n ;i++)cout<<arr[i]<<" ";
    return 0;
}