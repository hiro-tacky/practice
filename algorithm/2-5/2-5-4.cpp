//ワーシャルフロイド法

#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <random>
#include <queue>
#include <iomanip>

using namespace std;

int V=10;
vector<vector<int>> edge(V, vector<int>(V, INT_MAX/2));
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
        edge.at(i).at(i) = 0;
    }

    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            if(edge.at(i).at(j) < INT_MAX/2) { cout << setw(3) << left << edge.at(i).at(j) << " ";}
            else { cout << "--- ";}
        }
        cout << endl;
    }

    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            for(int k=0; k<V; k++){
                edge[i][j] = min(edge[i][j], edge[i][k] + edge[k][j]);
            }
        }
    }

    cout << endl;
    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            if(edge.at(i).at(j) < INT_MAX/2) { cout << setw(3) << left << edge.at(i).at(j) << " ";}
            else { cout << "--- ";}
        }
        cout << endl;
    }

    return 0;
}
 