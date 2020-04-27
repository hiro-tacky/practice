// 153 E

#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <utility>
#include <climits>

using namespace std;

void view(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main(){
    int n, h, count=0;
    cin >> h >> n;
    pair<int, int> tmp;
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        cin >> tmp.first >> tmp.second;
        v.push_back(tmp);
    }

    vector<int> dp(h, INT_MAX);
    for(int i=0; i<h; i++){
        for(int j=0; j<n; j++){
            if(i-v.at(j).first < 0){
                int buf = v.at(j).second;
                if(dp.at(i) > buf) dp.at(i) = buf;

            }
            else{
                int buf = dp.at(i-v.at(j).first) + v.at(j).second;
                if(dp.at(i) > buf) dp.at(i) = buf;
            }
        }
    }
    cout << dp.back() << endl;
    return 0;
}
