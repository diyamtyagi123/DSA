// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define mod (ll)(1e9 + 7) 
ll power(ll x, ll y, ll p) { 
	ll res = 1; 

	x = x % p; 
	while (y > 0) {
		if (y & 1) 
			res = (res * x) % p; 
		y = y >> 1; // y = y/2 
		x = (x * x) % p; 
	} 
	return res; 
} 
ll findCount(ll N){ 
	int count = power(2, N, mod); 
	return count; 
} 
int main(){ 
	ll N;
    cin >> N;
	cout << findCount(N);
	return 0; 
} 
