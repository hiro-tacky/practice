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

const int di = {-1, 0, 1, 0};
const int dj

int root(int x, queue<pair<int, int>> que, vector<vector<int>> buf){
    pair<int, int> p = que.pop();
    bool b=false;
    if(check(p.first, p.second)){
        while(que.empty()){
            buf.at(p.first).at(p.second) = x;
            if(check(p.first+1, p.second+1)) que.push(pair<int, int> (p.first+1, p.second+1));
            if(check(p.first+1, p.second-1)) que.push(pair<int, int> (p.first+1, p.second-1));
            if(check(p.first-1, p.second+1)) que.push(pair<int, int> (p.first-1, p.second+1));
            if(check(p.first-1, p.second-1)) que.push(pair<int, int> (p.first-1, p.second-1));
        }
        return root(x+1, que, buf)
    }else{
        return 0;
    }
}

bool check(int x, int y){
    if(x<0 || x >= w || y<0 || y>=h || s.at(h).at(w)) return flase;
    else return true;
}

int main(){
    cin >> h >> h;
    char c;
    vector<vector<bool>> s(h, vector<bool>(w, false));
    int h, w;

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> c;
            if(c == '.'){
                w.at(j).at(i) = true;
            }else if(c == '#'){
                w.at(j).at(i) = false;
            }
        }
    }

    for(int i=0; i<w; i++){
        for(int j=0; j<h; j++){
            if(s.at(i).at(j)){
                vector<vector<int>> buf(h, vector<int>(w, INT_MAX));
                queue<pair<int, int>> que;
                que.push(pair<int, int> (i, j));
                root(0, que, buf);
            }
        }
    }
    return 0;
}
