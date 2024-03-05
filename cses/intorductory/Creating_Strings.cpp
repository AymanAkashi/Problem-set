#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
#define ll long long
#define mod 1000000007
void solve(string &s)
{
	set<string> ans;
	sort(s.begin(), s.end());
	ans.insert(s);
	while(next_permutation(s.begin(), s.end()))
	{
		ans.insert(s);
	}
	cout << ans.size() << endl;
	for(auto x: ans){
		cout << x << endl;
	}
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	string s; cin >> s;
	solve(s);
	return 0;
}

// url: https://cses.fi/problemset/task/2165
