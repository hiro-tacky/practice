// D

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>
#include <climits>
#include <utility>

using namespace std;

int main(){
    int n, m, q, buf_1, buf_2, buf, node, col;
    cin >> n >> m>> q;
    vector<vector<bool>> u(n, vector<bool>(n, false));
    for(int i=0; i<m; i++){
        cin >> buf_1 >> buf_2;
        u.at(buf_1-1).at(buf_2-1) = true;
        u.at(buf_2-1).at(buf_1-1) = true;
    }
    vector<int> c, ans;
    for(int i=0; i<n; i++){
        cin >> buf;
        c.push_back(buf);
    }
    for(int i=0; i<q; i++){
        cin >> buf;
        if(buf == 1){
            cin >> node;
            ans.push_back(c.at(node-1));
            for(int j=0; j<n; j++){
                if(u.at(node-1).at(j)){
                        c.at(j) = c.at(node-1);
                }
            }
        }else if(buf == 2){
            cin >> node;
            ans.push_back(c.at(node-1));
            cin >> col;
            c.at(node-1) = col;
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans.at(i) << endl;
    }
}
