// #include <bits/stdc++.h>
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
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	ll test=1;
cin>>test;
	ll m = 0;
	while(test--)
	{
		ll n;cin>>n;
		m = max(m, n);
	}
	cout << m << endl;
	return 0;
}
