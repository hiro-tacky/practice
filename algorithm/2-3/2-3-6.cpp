//最長増加部分列問題

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
#include <utility>

using namespace std;
using ll = long long int;
using p = pair<int, int>;
#define NUM 1000000007

vector<int> a, dp;
int n;

void show(vector<int> buf1){
    for(int buf2 : buf1){
      cout << buf2 << " ";
    }
    cout << endl;
}

int func(){
    for(int i=0; i<n; i++){
        for(auto itr = dp.begin(); itr != dp.end(); itr++){
            if(*itr > a.at(i)){*itr = a.at(i); break;}
        }
    }
    show(dp);
    for(int i=0; i<dp.size(); i++){
        if(dp.at(i) > INT_MAX/2-1){return i;}
    }
    return -1;
}

int main(){
    int tmp;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> tmp;
        a.push_back(tmp);
    }
    dp = vector<int> (n+1, INT_MAX/2);
    cout << func() << endl;
}