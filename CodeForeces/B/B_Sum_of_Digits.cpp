// #include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <string>
using namespace std;
#define ll long long
#define mod 1000000007
 void	sum_digit(string &ss)
{
	ll count = 0;
	for (int i = 0; i < ss.size(); i++){
		count  += ss[i] - '0';
	}
	ss = to_string(count);
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	string ss; cin >> ss;
	int ans = 0;

	while(ss.size() > 1){
		sum_digit(ss);
		ans++;
	}

	cout << ans << endl;
	return 0;
}
// url: https://codeforces.com/contest/102/problem/B