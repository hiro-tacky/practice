// 154 B

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>
#include <climits>
#include <string>

using namespace std;
using p = pair<int, int>;
const int ll[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void show(vector<vector<int>> v){
    cout << endl;
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v.at(i).size(); j++){
            int tmp = v.at(i).at(j);
            if(tmp < 100) cout << setw(3) << tmp << " ";
            else cout << "INF ";
        }
        cout << endl;
    }
} 

int main(){
    int h, w;
    cin >> h >> w;
    char c;
    vector<vector<bool>> s(w, vector<bool>(h));
    vector<p> v;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> c;
            if(c == '.'){
                s.at(j).at(i) = true;
                v.push_back(pair<int, int> (j, i));
            }else if(c == '#'){
                s.at(j).at(i) = false;
            }
        }
    }
    int ans=0;
    for(p p_buf: v){
        int s_x = p_buf.first, s_y = p_buf.second, max_cost = 0;
        vector<vector<int>> cost_map(w, vector<int>(h, INT_MAX/2));
        cost_map.at(s_x).at(s_y) = 0;
        queue<p> que;
        que.push(p (s_x, s_y));
        while(!que.empty()){
            p p_now = que.front();
            int x = p_now.first, y = p_now.second;
            que.pop();
            int now_cost = cost_map.at(x).at(y) + 1;
            for(int i=0; i<4; i++){
                int n_x = x + ll[i][0], n_y = y + ll[i][1];
                if(n_x<0 || n_x>=w || n_y<0 || n_y>=h)continue;
                if(s.at(n_x).at(n_y) && now_cost < cost_map.at(n_x).at(n_y)){
                    cost_map.at(n_x).at(n_y) = now_cost;
                    que.push(p (n_x, n_y));
                    if(max_cost < now_cost) max_cost = now_cost;
                }
            }
        }
        if(ans < max_cost) ans = max_cost;
    }
    cout << ans << endl;
    return 0;
}
