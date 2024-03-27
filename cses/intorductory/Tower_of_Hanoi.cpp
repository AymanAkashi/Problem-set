// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define mod 1000000007

vector<pair<int, int> > tower;
int solve(int n, int s, int d, int a)
{
	if (n == 1)
	{
		tower.push_back(make_pair(s, d));
		return 0;
	}
	solve(n - 1, s, a, d);
	tower.push_back(make_pair(s, d));
	solve(n - 1, a, d, s);
	return 0;
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	ll test=1;
	cin>>test;
	solve(test, 1, 3, 2);
	cout<<tower.size()<<endl;
	for (auto i : tower)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	return 0;
}
