//動的計画法
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <numeric>
#include <cmath>

using namespace std;

vector<vector<int>> rec;
vector<pair<int, int>> vw;//first:value second:weight
int n, w, sum;

int dp(int step, int weight){
  if(rec.at(step).at(weight) >= 0){
    return rec.at(step).at(weight);
  }else{
    if(step == n-1) {
      return 0;
    }else{
      rec.at(step).at(weight) = dp(step+1, weight+vw.at(step).second) + vw.at(step).first;
    }else{
      rec.at(step).at(weight) = dp(step+1, weight);
    }
  }
}

int main(){
  cin >> n >> w;
  vw.insert(vw.begin(), n, pair<int, int>());
  rec.insert(rec.begin(), n, vector<int>(w+1, -1));
  for(int i=0; i<n; i++){
    cin >> vw.at(i).first >> vw.at(i).second;//first:value second:weight
  }
  // dp(0, 0, 0);
  cout << sum << endl;
}
