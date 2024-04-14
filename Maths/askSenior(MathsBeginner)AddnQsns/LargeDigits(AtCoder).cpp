#include <bits/stdc++.h>
using namespace std;

#define fast_io()                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long

void solve()
{
   int a,b;
   cin >> a >> b;

   int sumA =0;
   int sumB=0;

   while(a!=0 || b!=0){
    int remA, remB;
    remA = a%10;
    remB = b%10;
    sumA += remA;
    sumB += remB;
    a= a/10;
    b= b/10;
   } 

   int maxi = max(sumA, sumB);

   cout << maxi << endl;
}

int main()
{
    fast_io();

    solve();

    return 0;
}