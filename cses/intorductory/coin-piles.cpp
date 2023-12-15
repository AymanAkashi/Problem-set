#include <iostream> 
#define ll long long
using namespace std;

void  solve(int &a, int &b){
  if(a > b) swap(a, b);
  if(2*a < b) cout << "NO" << endl;
  else{
    if((a+b)%3 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}

int main(){

  int t; cin >> t;

  while(t--){
    int a, b; cin >> a >> b;
    solve(a, b);
    }
}
