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

	int two, three, five, six;cin >> two >> three >> five >> six;
	int sum = 0;
	int a1 = min(min(two, five), six);

	int a2 = min(two - a1 < 0 ? 0 : two - a1, three);

	sum += a1 * 256 + a2 * 32;
	cout << sum  << endl;

	return 0;
}

// url : http://codeforces.com/contest/734/problem/B