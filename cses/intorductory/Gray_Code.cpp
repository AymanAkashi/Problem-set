#include <iostream>
#include <bitset>

using namespace std;


int main(){
	int n; cin >> n;

	for(int i = 0; i < (1 << n); i++){
		int val = (i ^ (i >> 1));
		bitset<16> r(val);
		string s = r.to_string();
		cout << s.substr(16 - n) << endl;
	}
}

// url: https://cses.fi/problemset/result/7986602/