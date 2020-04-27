// 154 B

#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    int n, m, tmp, sum;
    cin >> n >> m;
    vector<int > v;
    for(int i=0; i<m; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    sum = accumulate(v.begin(), v.end(), 0);
    if(n-sum < 0) cout << -1 << endl;
    else cout << n-sum << endl;
    return 0;
}
