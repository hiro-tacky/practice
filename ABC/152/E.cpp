// 154 E

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>
#include <climits>

using namespace std;

int gcd(int n, int m){
    int tmp = n%m;
    if(tmp == 0) return m;
    else return gcd(m, tmp);
}

int lcm(int n, int m){
    if(n < m) swap(n, m);
    return n*m/gcd(n, m);
}

int main(){
    int n, tmp;
    long long int buf, sum=0;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    buf = lcm(v.at(0), v.at(1));
    for(int i=2; i<n; i++){
        buf = lcm(v.at(i), buf);
    }
    cout << buf;
    for(int i=0; i<n; i++){
        sum = (sum + buf/v.at(i))%1000000007;
    }

    cout << sum << endl;
    return 0;
}
