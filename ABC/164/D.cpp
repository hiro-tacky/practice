// 164 B

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>
#include <climits>
#include <string>

using namespace std;

int main(){
    string str, str_buf;
    cin >> str;
    long long int n = str.size();
    vector<pair<long long int, long long int>> pos_list;
    for(long long int i=1; i<1000; i++){
        str_buf = to_string(i*2019);
        long long int pos = str.find(str_buf);
        while(pos != string::npos){
            pos_list.push_back(pair<long long int, long long int>(pos, str_buf.length()));
            pos = str.find(str_buf, pos+1);
        }
    }
    for(auto p :pos_list){
        cout << p.first << " " << p.second << endl;
    }
    vector<int> v(pos_list.size(), 1);
    for(int i=pos_list.size()-2; i>=0; i--){
        auto p_0 = pos_list.at(i);
        for(int j=pos_list.size()-2; j>=0; j--){
            
        }
        auto p_1 = pos_list.at(i+1);
        if((p_0.first + p_0.second) == p_1.first){
            v.at(i) += v.at(i+1);
        }
    }
    cout << accumulate(v.begin(), v.end(), 0) << endl;
    return 0;
}
