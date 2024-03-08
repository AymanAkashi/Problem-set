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
	int res = 0;
	while(test--)
	{
		char n; cin >> n;
		res += n == 'A'  ? 1 : -1;
	}
	cout << (res == 0 ? "Friendship" : res > 0 ? "Anton" : "Danik");
	return 0;
}

// url : http://codeforces.com/contest/734/problem/A