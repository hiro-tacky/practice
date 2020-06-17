//プリム法

#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <random>
#include <queue>
#include <algorithm>

using namespace std;

int V=10;
vector<int> mincost(V, INT_MAX);
vector<bool> used(V, false);
vector<vector<int>> cost(V, vector<int>(V, INT_MAX));
random_device rnd;
mt19937 mt(rnd());
uniform_int_distribution<> rand100(10, 99);
uniform_int_distribution<> randv(0, 2);

int main(){

    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            if(randv(mt) == 0){
                edge.at(i).at(j) = rand100(mt);
            }
        }
    }

    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            if(edge.at(i).at(j) > 0) { cout << edge.at(i).at(j) << " ";}
            else { cout << "-- ";}
        }
        cout << endl;
    }

    mincost.at(0) = 0;
    int res = 0;

    while(true){
        int v = -1;
        for(int i=0; i<V; i++){
            if(!used.at(i) && (v == -1 || mincost.at(i) < mincost.at(v))) v = i;
            if(v == -1) break;
            used.at(v) = true;
            res += mincost.at(v);

            for(int i=0; i<V; i++){
                mincost.at(i) = min(mincost.at(i), cost.at(v).at(i));
            }
        }
    }
    return 0;
}
 