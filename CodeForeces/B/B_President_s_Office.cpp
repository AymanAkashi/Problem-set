// #include <bits/stdc++.h>
#include <climits>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
#define ll long long
#define mod 1000000007
bool solve(char c, char k)
{
	if(c != '0' and c != '.' and c != k)
		return true;
	return false;
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int n,m; cin >> n>> m;
	char k; cin >> k;
	char last = -1;
	vector<vector<char> > v(n+2, vector<char>(m+2, '0'));
	int res = 0;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			cin >> v[i][j];
		}
	}
	set<char> s;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (v[i][j] == k){
				s.insert(not solve(v[i - 1][j], k) ? '0' :v[i - 1][j]);
				s.insert(not solve(v[i + 1][j], k) ? '0' :v[i + 1][j]);
				s.insert(not solve(v[i][j - 1], k) ? '0' :v[i][j - 1]);
				s.insert(not solve(v[i][j + 1], k) ? '0' :v[i][j + 1]);
			}
		}
	}
	cout << s.size() - 1 << endl;
	return 0;
}
// url: https://codeforces.com/contest/6/problem/B