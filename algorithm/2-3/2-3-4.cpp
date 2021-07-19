//ナップザック問題02

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>
#include <climits>
#include <string>
#include <cmath>
#include <utility>

using namespace std;
using ll = long long int;
using p = pair<int, int>;
#define NUM 1000000007

vector<vector<int>> dp;
vector<pair<int, int>> wv;//first:value second:weight
int n, w, buf = 0;

void show(vector<vector<int>> v){
  for(vector<int> buf1 : v){
    for(int buf2 : buf1){
      cout << buf2 << " ";
    }
    cout << endl;
  }
}

int func(){
  for(int i=1; i<=n; i++){
    for(int j=0; j<=n*buf; j++){
      if(j < wv.at(i-1).second){
        dp.at(i).at(j) = dp.at(i-1).at(j);
      }else{
        dp.at(i).at(j) = min(dp.at(i-1).at(j), dp.at(i-1).at(j - wv.at(i-1).second) + wv.at(i-1).first);
      }
    }
  }
  show(dp);
  int tmp = 0;
  for(int i = 0; i<dp.at(n).size(); i++){
    if(dp.at(n).at(i) <= w) tmp = i;
  }
  return tmp;
}

int main(){
  cin >> n >> w;
  for(int i=0; i<n; i++){
    int tmp_w, tmp_v;
    cin >> tmp_w >> tmp_v;
    if(buf < tmp_v) buf = tmp_v;
    wv.push_back(p (tmp_w, tmp_v));
  }
  dp = vector<vector<int>> (n+1, vector<int>(n*buf+1, INT_MAX/2));
  dp.at(0).at(0) = 0;
  cout << func() << endl;
}
