// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	string s = "ROYGBIV";
	ll test=1;cin>>test;
	string ans;
	int c = 0;
	for(int i = 0; i < test; i++){
		cout << s[c];
		c++;
		if (c == 7)
			c = 3;
	}
	cout << ans << endl;
	return 0;
}
// url : https://codeforces.com/contest/78/problem/B