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
  // input
  int q;
  cin >> q;
  vector<pair <string, string>> dataset(q, pair <string, string>());
  for(int i=0; i<q; i++){
    cin >> dataset.at(i).first;
    cin >> dataset.at(i).second;
  }
  // main
  vector<vector<vector<int>>> dp(q, vector<vector<int>>(0, vector<int>()));
  for(int i=0; i<q; i++){
    dp.at(i) = vector<vector<int>> (dataset.at(i).first.length()+1, vector<int>(dataset.at(i).second.length()+1, 0));
    for(int x=1; x < dataset.at(i).first.length()+1; x++){
      for(int y=1; y < dataset.at(i).second.length()+1; y++){
        if(dataset.at(i).first.at(x-1) == dataset.at(i).second.at(y-1)){
          dp.at(i).at(x).at(y) = max({dp.at(i).at(x-1).at(y-1)+1, dp.at(i).at(x-1).at(y), dp.at(i).at(x).at(y-1)});
        }else{
          dp.at(i).at(x).at(y) = max(dp.at(i).at(x-1).at(y), dp.at(i).at(x).at(y-1));
        }
      }
    }
    cout << dp.at(i).at(dataset.at(i).first.length()).at(dataset.at(i).second.length()) << endl;
  }
}
