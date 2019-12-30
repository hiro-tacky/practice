#include <iostream>
#include <vector>
#include <string>
using namespace std;

int h, k, s_x, s_y, g_x, g_y;
vector<vector<int>> cw;
vector<vector<int>> cw_reached;

bool dfs(int x, int y){
  //経路外終了
  if(x < 0 || x > (h-1) || y < 0 || y > (k-1)) return false;
  //壁の場合終了
  if(cw.at(x).at(y) == 1) return false;
  //探索済み経路終了
  if(cw_reached.at(x).at(y) == 1) return false;
  //ゴール到着・探索終了
  if(x == g_x && y == g_y) return true;
  //探索済み経路保存
  cw_reached.at(x).at(y) = 1;

  if(dfs(x-1, y)) return true;
  if(dfs(x+1, y)) return true;
  if(dfs(x, y-1)) return true;
  if(dfs(x, y+1)) return true;
  return false;
}

int main(){
  cin >> h >> k;
  string tmp;
  for(int i=0; i<h; i++){
    cw_reached.push_back(vector<int>(k, 0));
    cw.push_back(vector<int>(0));
    cin >> tmp;
    for(int j=0; j<k; j++){
      cw.at(i).push_back(0);
      if(tmp.at(j) != '#') cw.at(i).at(j) = 0;
      else cw.at(i).at(j) = 1;
      // set start position
      if(tmp.at(j) == 's') {s_x = i; s_y = j;}
      // set goal position
      if(tmp.at(j) == 'g') {g_x = i, g_y = j;}
    }
  }
  if(dfs(s_x, s_y)) cout << "Yes";
  else cout << "No";
  return 0;
}
