//ベルマンフォード法

#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <random>

using namespace std;

int v=5, e=7;
vector<int> d;
vector<pair<pair<int, int>, int>> es(e);
random_device rnd;
mt19937 mt(rnd());
uniform_int_distribution<> rand100(1, 100);
uniform_int_distribution<> randv(0, v-1);

int main(){
    int s = 0;

    for(auto itr = es.begin(); itr!= es.end(); itr++){
        *itr = make_pair(make_pair(randv(mt), randv(mt)), rand100(mt));
        auto buf = *itr;
        cout << buf.first.first << " " << buf.first.second << " " << buf.second << endl; 
    }
    cout << endl;

    d = vector<int>(v, INT_MAX);  
    d.at(s)  = 0;

    while(true){
        bool check = true;
        for(int i=0; i<e; i++){
            if(d.at(es.at(i).first.first) < INT_MAX && d.at(es.at(i).first.second) > d.at(es.at(i).first.first) + es.at(i).second){
                d.at(es.at(i).first.second) = d.at(es.at(i).first.first) + es.at(i).second;
                for(auto itr = d.begin(); itr != d.end(); itr++){
                    cout << *itr << endl;
                }
                cout << endl;
                check = false;
            }  
        }
        if(check) break;
    }
    return 0;
}
