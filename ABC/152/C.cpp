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
    int n, tmp, min=0, count=0;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    min = v.at(0);
    count++;
    for(int i=1; i<n; i++){
        if(min > v.at(i)) {min = v.at(i); count++;}
    }
    cout << count << endl;
    return 0;
}
