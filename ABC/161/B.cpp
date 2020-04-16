// ABC161 B

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    vector<int> a (n, 0);
    for(int i=0; i<n; i++){
        cin >> a.at(i);
    }
    int count = 0;
    int sum = accumulate(a.begin(), a.end(), 0);
    for(vector<int>::iterator itr =  a.begin(); itr != a.end(); itr++){
        if(*itr >= double(sum)/(4*m) ) count++;
    }
    if(m <= count) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}