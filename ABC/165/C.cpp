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
    int n, m, q;
    long long int sum=0, max=0;
    cin >> n >> m >> q;

    vector<int> a(n, 0);
    vector<vector<int>> v (q, vector<int>(4, 0));

    for(int i=0; i<q; i++){
        cin >> v.at(i).at(0) >> v.at(i).at(1) >> v.at(i).at(2) >> v.at(i).at(3);
    }

    for(int i=0; i<n; i++
    ){
        for(int j=a.at(i-1); j<=m; j++){
            a.at(i) = j;
            sum = 0;
            for(int k=0; k<q; k++){
                if(v.at(k).at(1) - v.at(k).at(0) == v.at(k).at(2)) sum += v.at(k).at(3);
            }
            if(sum > max) max = sum;
        }
    }
    cout << max <<endl;
    return 0;
}