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
    int n, count=0;
    string tmp;
    cin >> n;
    vector<string> v;
    for(int i=0; i<n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    cout << v.size() << endl;
    return 0;
}
