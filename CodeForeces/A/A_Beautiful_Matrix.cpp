// #include <bits/stdc++.h>
#include <iostream>
#include <utility>
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
	pair<int, int> p;
	for(int i = 0; i< 5; i++){
		for (int j = 0; j < 5; j++){
			int a; cin >> a;
			if (a == 1){
				p = make_pair(i+1, j+1);
			}
		}
	}
	cout << abs(p.first - 3) + abs(p.second - 3) << endl;
	return 0;
}
// url : https://codeforces.com/contest/263/problem/A