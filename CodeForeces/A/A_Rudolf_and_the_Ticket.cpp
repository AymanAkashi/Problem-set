// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	int n,m,k; cin >> n >> m >> k;
	vector<int> a(n),b(m);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i <m; i++){
		cin >> b[i];
	}
	int res = 0;
	for(int i = 0; i < n;i++){
		for (int j = 0; j < m; j++){
			if (a[i] + b[j] <= k)
				res++;
		}
	}
	cout << res << endl;
}
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
