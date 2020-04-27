// 154 B

#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main(){
    long int n, tmp;
    cin >> n;
    vector<int> v(n, 0), num_list(n, 0);
    for(long int i=1; i<n; i++){
        cin >> tmp;
        v.at(i) = tmp;
    }
    for(long int i=1; i<n; i++){
        num_list.at(v.at(i)-1)++; 
    }
    for(long int i=0; i<n; i++){
        cout << num_list.at(i) << endl;
    }
    return 0;
}
