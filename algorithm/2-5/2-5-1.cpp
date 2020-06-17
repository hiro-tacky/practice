// 2部グラフ判定

#include <iostream>
#include <vector>
#include <queue>

using namespace std;


int n, u, v, w;
vector<vector<int>> vv;
vector<bool> cc;

bool dfs(int i){
    cc.at(i) = false;
    for(auto itr = vv.at(i).begin(); itr != vv.at(i).end(); itr++){
        if(!cc.at(*itr)) return false;
        if(cc.at(*itr) && !dfs(*itr)) return false;
    }
    return true;
}

int main(){
    cin >> n;
    vector<vector<int>> buf_1(n, vector<int>(n));
    vv = buf_1;
    vector<bool> buf_2(n, true);
    cc = buf_2;
    for(int i=0; i<n-1; i++){
        cin >> u >> v >> w;
        if(w%2 == 0){
            vv.at(u-1).push_back(v-1);
            vv.at(w-1).push_back(u-1);
        }
    }
    dfs(0);
    for(auto itr = cc.begin(); itr != cc.end(); itr++){
        cout << *itr << endl;
    } 
    return 0;
}