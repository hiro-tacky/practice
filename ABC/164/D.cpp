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
    long long int x=0, tmp, loc, ans=0;
    string str, buf;
    cin >> str;
    vector<pair<long long int, int>> v;
    for(int i=1; i<100; i++){
        tmp = 2019 * i;
        buf = to_string(tmp);
        loc = str.find(buf);
        while(loc != string::npos){
            v.push_back(pair<long long int, int> (loc, buf.size()));
            loc = str.find(buf, loc+1);
        }
    }
    if(v.size() == 0){ 
        cout << 0 << endl;
        return 0;
    }
    sort(v.begin(), v.end());
    ans = v.size();
    for(int i=0; i<v.size()-1; i++){
        if(v.at(i).first + v.at(i).second == v.at(i+1).first) ans++;
    }
    cout << ans << endl;
    return 0;
}
