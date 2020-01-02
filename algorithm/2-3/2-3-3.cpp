//動的計画法
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <numeric>
#include <cmath>

using namespace std;

int main(){
  int n, w;
  cin >> n >> w;
  vector<pair <int, int>> np(n, pair<int, int>());
  vector<vector<int>> dp(n+1, vector<int>(w+1, 0));
  for(int i=0; i<n; i++){
    cin >> np.at(i).first >> np.at(i).second;
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<=w; j++){
      if(j < np.at(i).second){
        dp.at(i+1).at(j) = dp.at(i).at(j);
      }else{
        dp.at(i+1).at(j) = max(dp.at(i).at(j), dp.at(i+1).at(j-np.at(i).second)+np.at(i).first);
        for(int i=0; i<n+1; i++){
          for(int j=0; j<w+1; j++){
            cout << dp.at(i).at(j) << " ";
          }
          cout << endl;
        }
        cout << endl;
      }
    }
    cout << endl;
  }


  cout << dp.at(n).at(w) << endl;
  return 0;
}
