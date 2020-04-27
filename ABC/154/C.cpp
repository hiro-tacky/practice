// 154 C

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long int n;
    cin >> n;
    vector<long long int> v;
    int tmp;
    for(int i=0; i<n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n-1; i++){
        if(v.at(i) == v.at(i+1)){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
