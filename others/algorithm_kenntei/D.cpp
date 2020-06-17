// D

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>
#include <climits>
#include <utility>

using namespace std;

inline int judge(vector<vector<bool>> v){
    if(v[1][1] && v[1][3] && v[2][1] && !v[2][2] && v[2][3] && v[3][1] && v[3][3]){ return 0; }
    else if(v[1][1] && v[1][2] && v[2][2] && v[3][2] ){ return 1; }
    else if(!v[1][1] && v[1][3] && v[2][1] && v[2][2] && v[2][3] && v[3][1]){ return 2; }
    else if(!v[1][1] && v[1][3] && v[2][1] && v[2][2] && v[2][3] && v[3][3] ){ return 3; }
    else if(!v[0][2] && v[1][1] && v[1][3] && v[2][1] && v[2][2] && v[2][3] && v[3][3]){ return 4; }
    else if(v[1][1] && !v[1][3] && v[2][1] && v[2][2] && v[2][3] && !v[3][1] && v[3][3]){ return 5; }
    else if(v[1][1] && !v[1][3] && v[2][1] && v[2][2] && v[2][3] && v[3][1] && v[3][3]){ return 6; }
    else if(v[1][3] && !v[2][1] && v[2][3] && v[3][3]){ return 7; }
    else if(v[1][1] && v[1][3] && v[2][1] && v[2][2] && v[2][3] && v[3][1] && v[3][3]){ return 8; }
    else if(v[1][1] && v[1][3] && v[2][1] && v[2][2] && v[2][3] && v[3][3]){ return 9; }
    return -1;
}

int main(){
    int n;
    cin >> n;
    string buf, part;
    vector<vector<vector<bool>>> v(n, vector<vector<bool>>(5, vector<bool>(4, false)));
    for(int i=0; i<5; i++){
        cin >> buf;
        for(int j=0; j<n; j++){
            part = buf.substr(j*4, 4);
            for(int k=0; k<4; k++){
                if(part[k] == '.'){
                    v.at(j).at(i).at(k) = false;
                }else if(part[k] == '#'){
                    v.at(j).at(i).at(k) = true;
                }
            }
        }
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<v.at(i).size(); j++){
    //         for(int k=0; k<v.at(i).at(j).size(); k++){cout << v.at(i).at(j).at(k);}
    //         cout << endl;
    //     }
    //     cout << endl;
    // }

    for(int i=0; i<n; i++){
        cout << judge(v.at(i));
    }
    cout << endl;
    return 0;
}
