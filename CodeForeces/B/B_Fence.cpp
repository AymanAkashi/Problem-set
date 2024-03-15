// #include <bits/stdc++.h>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	ll test=1;
	cin>>test;
	ll k; cin >> k;
	vector<int> v(test);
	vector<int> sum(test + 1);
	for (int i = 0; i < test; i++){
		cin >> v[i];
		sum[i+1] = v[i] + sum[i];
	}
	pair<ll, ll> m = {INT_MAX, 0};
	for (int i = 0; i+k <= test; i++){
		ll diff = sum[i+k] - sum[i];
		// cout << i << " : " << i+k << " > " << diff << " - " << m.first << endl;
		if (m.first > diff){
			m.first = diff;
			m.second = i+1;
		}
	}
	cout << m.second << endl;
	return 0;
}
//url : https://codeforces.com/contest/363/problem/B