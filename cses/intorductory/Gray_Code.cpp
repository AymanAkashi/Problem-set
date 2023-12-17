#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>


using namespace std;

string grayCode(int n, string &empty){
	if (n == 0)
	{
		empty = "0";
		return "0";
	}
	if (n == 1)
	{
		empty = "1";
		return "1";
	}
	if (n == 2)
	{
		empty = "10";
		return "10";
	}
	return grayCode(n/2, empty) + grayCode(n%2 == 0 ? 0 : 1, empty);
}

string empty(int n, int len){
	string ans = "";
	for (int i = 0; i < len - n; ++i)
	{
		ans += "0";
	}
	return ans;

}

int main(){
	int n;
	cin >> n;
	vector<string> ans;
	int x = pow(2, n);
	string last = "";
	for (int i = 0; i < x; ++i)
	{
		ans.push_back(grayCode(i, last));
	}
	for (int i = 0; i < ans.size(); ++i)
	{
		if (i % n == 0)
			cout << empty(ans[i].size(), ans.back().size()) + ans[i] << endl;
	}

	for (int i = ans.size() - 1; i >= 0; --i)
	{
		if (i % n != 0)
			cout << empty(ans[i].size(), ans.back().size()) + ans[i] << endl;
	}

	return 0;
}