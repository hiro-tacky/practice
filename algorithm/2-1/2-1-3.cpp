#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <utility>
using namespace std;

int h, k, s_x, s_y, g_x, g_y;
vector<vector<int>> cw;
vector<vector<int>> cw_cost;
queue<pair<int, int>> que;

bool bfs_check(int x, int y){
  //経路外終了
  if(x < 0 || x > (h-1) || y < 0 || y > (k-1)) return false;
  //壁の場合終了
  if(cw.at(x).at(y) == 1) return false;
  return true;
}

int main(){
  cin >> h >> k;
  cin >> s_x >> s_y;
  s_x--; s_y--;
  cin >> g_x >> g_y;
  g_x--; g_y--;
  int cost=0, nx, ny;
  string tmp;
  for(int i=0; i<h; i++){
    cw_cost.push_back(vector<int>(k, 100000));
    cw.push_back(vector<int>(0));
    cin >> tmp;
    for(int j=0; j<k; j++){
      cw.at(i).push_back(0);
      if(tmp.at(j) != '#') cw.at(i).at(j) = 0;
      else cw.at(i).at(j) = 1;
    }
  }
  que.push(pair<int, int>(s_x, s_y));
  cw_cost.at(s_x).at(s_y) = 0;
  while(que.size()){
    nx = que.front().first;
    ny = que.front().second;
    if(nx == g_x && ny == g_y) break;
    cost = cw_cost.at(nx).at(ny);
    if(bfs_check(nx+1, ny) && cw_cost.at(nx+1).at(ny) > cw_cost.at(nx).at(ny) + 1) {que.push(pair<int, int> (nx+1, ny)); cw_cost.at(nx+1).at(ny) = cw_cost.at(nx).at(ny) + 1;}
    if(bfs_check(nx-1, ny) && cw_cost.at(nx-1).at(ny) > cw_cost.at(nx).at(ny) + 1) {que.push(pair<int, int> (nx-1, ny)); cw_cost.at(nx-1).at(ny) = cw_cost.at(nx).at(ny) + 1;}
    if(bfs_check(nx, ny+1) && cw_cost.at(nx).at(ny+1) > cw_cost.at(nx).at(ny) + 1) {que.push(pair<int, int> (nx, ny+1)); cw_cost.at(nx).at(ny+1) = cw_cost.at(nx).at(ny) + 1;}
    if(bfs_check(nx, ny-1) && cw_cost.at(nx).at(ny-1) > cw_cost.at(nx).at(ny) + 1) {que.push(pair<int, int> (nx, ny-1)); cw_cost.at(nx).at(ny-1) = cw_cost.at(nx).at(ny) + 1;}
    que.pop();
  }
  cout << cw_cost.at(g_x).at(g_y) << endl;
  return 0;
}
