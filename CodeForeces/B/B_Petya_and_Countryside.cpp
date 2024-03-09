#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'
void solve(vector<int> &v)
{
	int ans = 0;
	for (int i = 0; i < v.size();i++){
		int block = v[i];
		int count = 1;
		for (int j = i + 1; j < v.size() and v[j] <= block and (block = v[j]); j++) count++;
		block = v[i];
		for (int j = i - 1; j >= 0 and v[j] <= block and (block = v[j]); j--) count++;
		ans = max(ans, count);
	}
	cout << ans << endl;
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	ll test=1;
	cin>>test;
	vector<int> v;
	while(test--)
	{
		ll a; cin>> a;
		v.push_back(a);
	}
	solve(v);
	return 0;
}
