//ABC171

#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <random>
#include <queue>
#include <iomanip>
#include <algorithm>
#include <complex>
#include <string>
#include <numeric>
#include <random>

using namespace std;

int main(){
    long long int n, q, buf, buf_1, buf_2, sum = 0; 
    cin >> n;
    vector<long long int> vv(100000, 0), l;
    for(int i=0; i<n; i++){
        cin >> buf;
        vv.at(buf-1)++;
        sum += buf;
    }
    cin >> q;
    for(int i=0; i<q; i++){
        cin >> buf_1 >> buf_2;
        sum += vv.at(buf_1-1)*(buf_2-buf_1);
        vv.at(buf_2-1) += vv.at(buf_1-1);
        vv.at(buf_1-1) = 0;
        l.push_back(sum);
    }
    for(auto n: l){
        cout << n << endl;
    }
    return 0;
}