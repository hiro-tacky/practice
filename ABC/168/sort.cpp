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
#include <random>

using namespace std;
using ll = long long;

#define v_size 20;


void view(vector<int> &v){
    for(auto itr=v.begin(); itr != v.end(); itr++){
        cout << " " << *itr << " ";
    }
    cout << endl;
}

void swap_view(vector<int> &v, int i, int j, bool c){
    for(int k=0; k<v.size(); k++){
        if((k == i || k == j) && c) cout << "*";
        else if((k == i || k == j) && !c) cout << "=";
        else cout << " ";
        cout << v.at(k) << " ";
    }
    cout << endl;
}

void swap(vector<int> &v, int i, int j){
    int tmp = v.at(i);
    v.at(i) = v.at(j);
    v.at(j) = tmp;
}

void set_v(vector<int> &v){
    random_device rnd;     // 非決定的な乱数生成器でシード生成機を生成
    mt19937 mt(rnd()); //  メルセンヌツイスターの32ビット版、引数は初期シード
    uniform_int_distribution<> rand100(10, 99);     // [0, 99] 範囲の一様乱数
    v.clear();
    for(int i=0; i<7; i++){
        v.push_back(rand100(mt));
    }
}

vector<int> merge(vector<int> &left, vector<int> &right){
    vector<int> buf;
    int l=0, r=0;
    while(l != left.size()-1 || r != right.size()-1){
        if(left.at(l) < right.at(r)){
            buf.push_back(left.at(l));
            l++;
        }else{
            buf.push_back(right.at(r));
            r++;
        }
    }
    if(l == left.size()-1){
        for(; r < right.size(); r++){
            buf.push_back(right.at(r));
        }
    }else if(r == right.size()-1){
        for(; l < left.size(); l++){
            buf.push_back(left.at(l));
        }
    }
    return buf;
}

int main(){
    vector<int> v;
    // set_v(v);
    // cout << "babble sort" << endl;
    // view(v);
    // for(int i=v.size()-1; i>0; i--){
    //     for(int j=1; j<=i; j++){
    //         if(v.at(j) < v.at(j-1)){
    //             swap(v, j, j-1);
    //             swap_view(v, j, j-1, true);
    //         }else{
    //             swap_view(v, j, j-1, false);
    //         }
    //     }
    // }

    // set_v(v);
    // cout << "selector sort" << endl;
    // view(v);
    // int min_buf, tmp = 2;
    // for(int i=0; i<v.size()-2; i++){
    //     min_buf = v.at(i);
    //     for(int j=i; j<v.size()-1; j++){
    //         if(min_buf > v.at(j)){
    //             tmp = j;
    //             min_buf = v.at(j);
    //         }
    //     }
    //     swap(v, i, tmp);
    //     swap_view(v, i, tmp, true);
    // }
    // return 0;

    // set_v(v);
    // cout << "insertion sort" << endl;
    // view(v);
    // int tmp;
    // for(int i=1; i<v.size(); i++){
    //     tmp = v.at(i);
    //     if(v.at(i-1) > tmp){
    //         int j = i-1;
    //         while(j >= 0 && v.at(j) > tmp){
    //             swap(v, j, j+1);
    //             swap_view(v, j, j+1, true);
    //             j--;
    //         }
    //     }
    // }

    set_v(v);
    cout << "merge sort" << endl;
    view(v);
    int tmp;
    for(int i=1; i<v.size(); i++){
        tmp = v.at(i);
        if(v.at(i-1) > tmp){
            int j = i-1;
            while(j >= 0 && v.at(j) > tmp){
                swap(v, j, j+1);
                swap_view(v, j, j+1, true);
                j--;
            }
        }
    }

    return 0;
}
