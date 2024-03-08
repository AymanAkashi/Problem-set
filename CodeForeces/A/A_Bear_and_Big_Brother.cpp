#include <iostream>
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
	int a, b; cin >> a>> b;
	int res = 0;
	while(a <= b){
		a*=3;
		b*=2;
		res++;
	}
	cout << res << endl;
	return (0);
}

// url : http://codeforces.com/contest/791/problem/A