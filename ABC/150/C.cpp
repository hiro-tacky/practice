//ABC150

#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <random>
#include <queue>
#include <iomanip>
#include <algorithm>
#include <complex>
#include <string>

using namespace std;

int l_num(vector<bool> v, int x){
    int count=0;
    for(int i=0; i<x; i++){
        if(v.at(i)) count++;
    }
    return count;
}

int func(int x){
    if(x==1)return 1;
    else return x*func(x-1);
}

int main(){
    int n, p_rank=0, q_rank=0;
    cin >> n;
    vector<int> p(n), q(n);
    vector<bool> p_used(n, true), q_used(n, true);
    for(int i=0; i<n; i++){
        cin >> p.at(i);
    }
    for(int i=0; i<n; i++){
        cin >> q.at(i);
    }
    for(int i=0; i<n-1; i++){
        p_rank += l_num(p_used, p.at(i)-1)*func(n-1-i);
        p_used.at(p.at(i)-1) = false;
        q_rank += l_num(q_used, q.at(i)-1)*func(n-1-i);
        q_used.at(q.at(i)-1) = false;
    }
    cout << abs(p_rank-q_rank) << endl;
    return 0;
}