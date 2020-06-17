// 166 C

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
    int n, m, buf, a, b, count=0;
    cin >> n >> m;
    vector<int> h(n);
    vector<bool> check(n, true);
    for(int i=0; i<n; i++){
        cin >> buf;
        h.at(i) = buf;
    }
    for(int i=0; i<m; i++){
        cin >> a >> b;
        if(h.at(a-1) < h.at(b-1)){ check.at(a-1) = false; }
        else if(h.at(a-1) > h.at(b-1)){ check.at(b-1) = false; }
        else if(h.at(a-1) == h.at(b-1)){ check.at(a-1) = false; check.at(b-1) = false; }
    }
    for(int i=0; i<check.size(); i++){
        if(check.at(i)) count++;
    }
    cout << count << endl;
}