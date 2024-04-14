#include <iostream>
#include <cmath>
const int mod=1e9+7;
using namespace std;
#define ll long long 
//this is sum of divisor for a number n 
//we need to calculate the sigma n 
ll f(ll n){
	//return (n*(n+1))/2 overflow 
	ll a,b;
	if(n&1){
		//if n is odd
		a=n;b=(n+1)/2;
	}
	else{
		a=n/2;b=n+1;
	}
	return ( (a%mod) * (b%mod)) %mod;
}
int main() {
    // Initialize sum
    /*long long sum = 0;

    // Input: Number for which sum of divisors is to be calculated
    long long n;
    cin >> n;

    // Iterate from 1 to sqrt(n)
    for (long long i = 1; i <= sqrt(n); ++i) {
        // Check if i is a divisor of n
        if (n % i == 0) {
            // Add i to the sum
            sum =(sum+ i)%mod;

            // If i is not equal to n/i, add n/i to the sum
            if (n / i != i) {
                sum = (sum+  n / i)%mod;
            }
        }
    }

    // Print the sum of divisors
    cout <<sum%mod<<endl; */
	ll n;cin>>n;
	ll sum=0;
	for(ll x=1;x*x<=n;x++){
		ll count=n/x - x +1;//number of numbers having x as divisor 
		sum+=(count%mod)*x;//sum of mod and multiplied with x 
		sum%=mod;
		sum+=f(n/x)-f(x);// natural number sum till n//x and subtract that from x 
		sum+=mod;//to prevent negatice 
		sum%=mod;
	}
	cout<<sum<<endl;
    return 0;
}
