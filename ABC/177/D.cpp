// 177

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

using namespace std;
using ll = long long int;
#define NUM 1000000007

int main(){
    ll n, m, buf_a, buf_b, max_buf;
    cin >> n >> m;
    vector<vector<ll>> v(n);
    vector<int> g_list(n, INT_MAX), count(n, 0);
    for(int i=0; i<m; i++){
        cin >> buf_a >> buf_b;
        v.at(buf_a-1).push_back(buf_b-1);
        v.at(buf_b-1).push_back(buf_a-1);
    }
    int class_id=0;
    for(int i=0; i<n; i++){
        queue<int> que;
        if(class_id < g_list.at(i)){
            que.push(i);
            while(!que.empty()){
                int buf = que.front();
                que.pop();
                g_list.at(buf) = class_id;
                for(auto itr=v.at(buf).begin(); itr != v.at(buf).end(); itr++){
                    if(g_list.at(*itr) > class_id){
                        g_list.at(*itr) = class_id;
                        que.push(*itr);
                    }
                }                     
            }
            class_id++;
        }
    }

    for(auto itr=g_list.begin(); itr != g_list.end(); itr++){
        count.at(*itr)++;
    }
    max_buf = *max_element(count.begin(), count.end());
    cout << max_buf << endl;
    return 0;
}
