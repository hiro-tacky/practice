// ABC157 C

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> p(m);
    
    for(int i=0; i<m; i++){
        cin >> p.at(i).first >> p.at(i).second;
    }
    for(int i=0; i<1000; i++){
        int nx = i/10;
        vector<int> d(1, i%10);
        while(nx){
            d.push_back(nx%10);
            nx /= 10;
        }
        if(d.size() != n)  continue;
        bool check = true;
        reverse(d.begin(), d.end());
        for(int j=0; j<m; j++){
            if(d.at(p.at(j).first-1) != p.at(j).second){
                check = false;
            }
        }
        if(check){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}