//Roa

#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <random>
#include <queue>
#include <iomanip>

using namespace std;

int V=10;
vector<int> d(V, INT_MAX), d2(V, INT_MAX);
vector<vector<int>> edge(V, vector<int>(V, -1));
random_device rnd;
mt19937 mt(rnd());
uniform_int_distribution<> rand100(10, 99);
uniform_int_distribution<> randv(0, 2);

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

    d.at(s) = 0;
    priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
    que.push(pair<int, int>(0, s));

    while(!que.empty()){
        pair<int, int> p = que.top();
        que.pop();
        int v = p.second;
        if(d.at(v) < p.first) {continue;}
        for(int i=0; i<V; i++){
            if(edge.at(v).at(i) > 0){
                int d_buf = d.at(v) + edge.at(v).at(i);
                if(d.at(i) > d_buf){
                    d2.at(i) = d.at(i);
                    d.at(i) = d_buf;
                    que.push(pair<int, int>(d.at(i), i));
                }else if(d.at(i) < d_buf && d2.at(i) > d_buf){
                    d2.at(i) = d_buf;
                    que.push(pair<int, int>(d.at(i), i));
                }
                for(auto itr = d.begin(); itr != d.end(); itr++){
                    if(*itr != INT_MAX) cout << setw(3) << left << *itr << " ";
                    else cout << "INF ";
                }
                cout << endl;
                for(auto itr = d2.begin(); itr != d2.end(); itr++){
                    if(*itr != INT_MAX) cout << setw(3) << left << *itr << " ";
                    else cout << "INF ";
                }                
                cout << endl << endl;
            }
        }
    }



    return 0;
}
 