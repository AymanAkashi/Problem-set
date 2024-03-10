// #include <bits/stdc++.h>
#include <iostream>
#include <map>
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

	int a,n; cin >> a >> n;
	vector<int> v(a + 1);
	map<int, int> m;
	for (int i = 1; i <= a; i++){
		cin >> v[i];
		m[v[i]]++;
	}
	int res = m[1];
	for (int i = n-1, j = n+1; i >= 1 and j <= a; i--, j++){
		res -= abs(v[j] - v[i]);
	}
	cout << res << endl;

	return 0;
}

// url: http://codeforces.com/contest/680/problem/B