// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define mod 1000000007

void	reserved(vector<ll> &a, ll i, ll j,ll  k , ll m){
	if (k == m)
		return ;
	if (a[i] > 0 and a[j] > 0 and a[k] > 0){
		a[i] -=1;
		a[j] -=2;
		a[k] -=1;
		reserved(a, i, j, k, m);
	}
	reserved(a, i+1, j+1, k+1, m);
}
void solve()
{
	ll n;cin >> n;
	vector<ll> a(n);
	for (ll i = 0; i < n; i++){
		cin >> a[i];
	}
	// reserved(a, 0, 1, 2, n);
	for (int i = 0, j = 1, k = 2; k < n; i++, j++, k++){
		if (a[i] > 0 and a[j] > 0 and a[k] > 0){
			int x = min(a[i], a[k]);
			a[i] -= x;
			a[k] -= x;
			a[j] -= x*2;
		}
	}
	for (auto it: a){
		if (it != 0){
			cout << "NO\n";
			return ;
		}
	}
	cout << "YES\n";

}
// 1 3 5
// -1 -2 -1
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	ll test=1;
	cin>>test;
	while(test--)
	{
		solve();
	}
	return 0;
}
// 1 3 5 5 2
// 0 1 4 5 2
// 0 1 3 3 1
// 0 0 1 2 1
// 0 0 0 0 0
// 1 2 1