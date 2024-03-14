// #include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
#define ll long long
#define mod 1000000007
void solve(vector<int> &stones, vector<pair <ll, ll> > &sum, int r, int l, int type)
{
	if (type == 1){
		cout << sum[r].first - sum[l-1].first << endl;
	}
	else{
		cout <<sum[r].second - sum[l-1].second << endl;
	}
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int t; cin >> t;
	vector<int> stones(t);
	vector<pair<ll, ll> > v(t + 1);
	for(int i = 0; i < t; i++){
		cin >> stones[i];
		v[i+1].first = stones[i] + v[i].first;
	}
	vector<int> sr(stones);
	sort(sr.begin(), sr.end(), [](int a, int b) {return a < b;});
	for(int i = 0; i < t; i++){
		v[i+1].second = sr[i] + v[i].second;
	}
	ll test=1;
	cin>>test;
	while(test--)
	{
		int l,r, type; cin >> type >> l >> r;
		solve(stones, v, r, l, type);
	}
	return 0;
}
