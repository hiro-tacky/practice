// 154 B

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>
#include <climits>

using namespace std;

int main(){
    int n, tmp, b, e;
    long long int sum=0;
    vector<vector<int>> b_e(10, vector<int>(10, 0));
    cin >> n;
    for(int i=1; i<=n; i++){
        e = i%10;
        tmp = i;
        while(tmp >= 10){ tmp /= 10;}
        b = tmp;
        b_e.at(b).at(e)++;
    }
    for(int i=1; i<10; i++){
        for(int j=1; j<10; j++){
            sum += b_e.at(i).at(j) * b_e.at(j).at(i);
        }
    }
    cout << sum << endl;
    return 0;
}
