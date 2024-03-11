// #include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	int n;cin >> n;
	string s; cin >> s;
	map<string, int> m;
	for (int i = 0;  i + 2 < n; i++){
		m[s.substr(i, 3)]++;
		if (i + 4 < n)
			m[s.substr(i, 5)]++;
	}
	cout << m["pie"] + m["map"] - m["mapie"] << endl;
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