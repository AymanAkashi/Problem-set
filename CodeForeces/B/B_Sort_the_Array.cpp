// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int test=1;
	cin>>test;
	vector<int> v(test + 1, 0);
	for(int i = 1; i <= test; i++) cin >> v[i];
	vector<int> v1(v);
	sort(v1.begin(), v1.end());
	for(int i = 1, j = 2; j <= test; i++, j++)
	{
		if (v[i] > v[j]){
			int k = i, l = j;
			int start = i;
			int end = j;
			for(; l <= test; k++, l++){
				if(v[k] < v[l]){
					end = k;
					break;
				}
			}
			if(l == test + 1){
				end = test;
			}
			reverse(v.begin() + start, v.begin() + end + 1);
			if (v == v1){
				cout << "yes" << endl;
				cout << start << " " << end << endl;
				return 0;
			}
			else{
				cout << "no" << endl;
				return 0;
			}

		}
	}
	cout << "yes" << endl;
	cout << "1 1" << endl;
	return 0;
}
//url : http://codeforces.com/contest/451/problem/B