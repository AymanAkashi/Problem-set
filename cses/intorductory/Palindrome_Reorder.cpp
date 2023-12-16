#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	string s;cin >> s;
	map<char, int> m;

	for (char c: s){
		m[c]++;
	}
	int odd = 0;
	char odd_char;
	for (auto it: m){
		if (it.second % 2 != 0){
			odd++;
			odd_char = it.first;
		}
	}
	if (odd > 1){
		cout << "NO SOLUTION" << endl;
		return 0;
	}
	string res;
	for (auto it: m){
		if (it.first != odd_char){
			for (int i = 0; i < it.second/2; i++){
				res += it.first;
				m[it.first]--;
			}
		}
	}
	string rev = res;
	reverse(rev.begin(), rev.end());
	for (int i = 0; i < m[odd_char]; i++){
		res += odd_char;
	}


	cout << res+rev << endl;
}

// url : https://cses.fi/problemset/task/1755/