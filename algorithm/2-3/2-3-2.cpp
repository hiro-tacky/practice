//最長共通部分列問題
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <numeric>
#include <cmath>

using namespace std;

void show(vector<vector<int>> v){
  for(vector<int> buf1 : v){
    for(int buf2 : buf1){
      cout << buf2 << " ";
    }
    cout << endl;
  }
}

int main(){
  // input
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s;
  cin >> t;
  vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
  for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
      if(s.at(i-1) != t.at(j-1)){
        dp.at(i).at(j) = max(dp.at(i-1).at(j), dp.at(i).at(j-1));
      }else{
        dp.at(i).at(j) = dp.at(i-1).at(j-1)+ 1;
      }
    }
  }
  show(dp);
  return 0;
}
