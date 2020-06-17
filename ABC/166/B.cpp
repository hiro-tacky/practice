// 166 B

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
    int n, k, buf, count=0, tmp;
    cin >> n >> k;
    vector<bool> list(n, true);
    for(int i=0; i<k; i++){
        cin >> buf;
        for(int j=0; j<buf; j++){
            cin >> tmp;
            list.at(tmp-1) = false;
        }
    }
    for(int i=0; i<n; i++){
        if(list.at(i)) count++;
    }
    cout << count << endl;
    return 0;

}