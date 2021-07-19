//Roadbnlocks

#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <random>
#include <queue>
#include <iomanip>
#include <algorithm>

using namespace std;

int N=5, M=5, R=8;
int V = N+M;
vector<vector<int>> edge(V, vector<int>(V, INT_MAX));
vector<bool> used(N+M, false);
random_device rnd;
mt19937 mt(rnd());
uniform_int_distribution<> rand100(10, 99);
uniform_int_distribution<> randv(0, 2);

bool comp(pair<pair<int, int>, int> p1, pair<pair<int, int>, int> p2){
    return p1.second < p2.second;
}

int main(){
    int s = 0;

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
    
    // sort(edge.begin(), edge.end(), comp);

    int res = 0;
    vector<int> mincost(N+M);
    mincost.at(0) = 0; 
    while(true){
        int v = -1;
        for(int j=0; j<N+M; j++){
            if(!used.at(j) && (v == -1 || mincost.at(v) < mincost.at(j)) ) v = j;
        }
        if(v == -1) break;
        for(int j=0; j<N+M; j++){
            mincost.at(j) = min(mincost.at(j), edge.at(v).at(j));
        }
    }

    return res;
}
 