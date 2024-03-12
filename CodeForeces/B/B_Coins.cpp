// #include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <stack>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;
#define ll long long
#define mod 1000000007
void solve(string &s)
{
	s[1] = '<';
	swap(s[0], s[2]);
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	map<char, int> m;
	map<int, char> mm;
	m['A'] = 0;
	m['B'] = 0;
	m['C'] = 0;
	for(int i = 0; i < 3; i++){
		string s; cin >> s;
		if (s[1] == '>'){
			m[s[0]]++;
		}
		else {
			m[s[2]]++;
		}
	}
	int count  = 0;
	for (auto it: m){
		if (it.second == 1)
			count++;
		mm[it.second] = it.first;
	}
	if(count >= 2)
		cout << "Impossible\n";
	else
		for (auto it: mm){
			cout << it.second;
		}

	return 0;
}
// url: https://codeforces.com/contest/47/problem/B