// 156-C

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n, buf=INT_MAX, tmp;
    cin >> n;
    vector<int> x(n, 0);
    for(int i=0; i<n; i++){
        cin >> x.at(i);
    }
    vector<int>::iterator itr_max, itr_min, itr;
    itr_max = max_element(x.begin(), x.end());
    itr_min = min_element(x.begin(), x.end());
    for(int i = *itr_min; i <= *itr_max; i++){
        tmp = 0;
        for(itr = x.begin(); itr < x.end(); itr++){
            tmp += (i - *itr) * (i - *itr);
        }
        if(buf > tmp) buf = tmp;
    }
    cout << buf << endl;
    return 0;
}