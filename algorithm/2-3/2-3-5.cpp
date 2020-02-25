//最長増加部分列問題

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){
    vector<int> a {4, 2, 3, 1, 5};
    vector<int> dp (a.size(), INT_MAX);
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<dp.size(); j++){
            if(a.at(i) < dp.at(j)){
                dp.at(j) = a.at(i);
                break;   
            }
        }
        for(int j=0; j<dp.size(); j++){
            cout << dp.at(j) << " ";
        }
        cout << endl;
    }
}
