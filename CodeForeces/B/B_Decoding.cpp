// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#define mod 1000000007
void solve(std::string &s)
{
	string ans;
	for (int i = s.size() - 2; i >= 0; i-=2){
		ans += s[i];
	}
	for (int i = s.size() % 2 == 0 ? 1 : 0; i < s.size(); i+=2){
		ans += s[i];
	}
	cout << ans << endl;

}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	ll test=1;
	cin>>test;
	string s; cin >> s;
	solve(s);
	return 0;
}
