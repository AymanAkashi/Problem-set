#include <algorithm>
#include <iostream>
#include <map>
#include <utility>
#include <vector>

using namespace std;
#define ll long long
#define mod 1000000007
bool cmp(pair<ll, ll>& a, 
        pair<ll, ll>& b) 
{ 
    return a.first > b.first; 
} 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	ll a, b; cin >> a >> b;
	vector<pair<ll, ll> > mm;
	for (int i = 1; i <= b; i++){
		ll m, n; cin >> m >> n;
		mm.push_back(make_pair(n, m));
	}
	ll res = 0;
	sort(mm.begin(), mm.end(), cmp);
	for (int i = 0; i < mm.size() and a > 0; i++){
		res += min(mm[i].second, a) * mm[i].first;
		a -= min(mm[i].second, a);
	}
	cout << res << endl;
	return 0;
}


// url: http://codeforces.com/contest/16/problem/B