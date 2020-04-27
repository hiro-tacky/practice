// 153 A

#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    long int h, n, tmp, sum;
    vector<int> v;
    cin >> h >> n;
    for(int i=0; i<n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    sum = accumulate(v.begin(), v.end(), 0);
    if(h > sum) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}
