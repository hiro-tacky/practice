// 154 B

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
    long long int n, m, tmp;
    string str;
    vector<pair<long long int, string>> p; 
    cin >> n >> m;
    for(long long int i=0; i<m; i++){
        cin >> tmp >> str;
        p.push_back(pair<long long int, string> (tmp, str));
    }
    
    long long int ac=0, wa=0;

    vector<pair<long long int, bool>> v (n, pair<long long int, bool>(0, false));
    for(long long int i=0; i<m; i++){
        if(v.at(p.at(i).first-1).second){
            continue;
        }else{
            if(p.at(i).second == "WA"){
                v.at(p.at(i).first-1).first++;
            }else{
                wa += v.at(p.at(i).first-1).first;
                v.at(p.at(i).first-1).second = true;
            }
        }
    }

    for(long long int i=0; i<n; i++){
        // cout << v.at(i).first << " " << v.at(i).second << endl;
        if(v.at(i).second) ac++;
    }
    
    cout << ac << " " << wa << endl;
    return 0;
}
