// B

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>
#include <climits>
#include <utility>

using namespace std;

int main(){
    int n, m, q, check, s_1, s_2;
    cin >> n >> m >> q;
    string line, buf;
    vector<int> rate(m, n), ans;
    vector<vector<int>> score(n, vector<int>(0));
    for(int i=0; i< q; i++){
        cin >> check;
        if(check == 1) {
            cin >> s_1;
            int sum = 0;
            for(int j=0; j<score.at(s_1-1).size(); j++){
                sum += rate.at(score.at(s_1-1).at(j));
            }
            ans.push_back(sum);
        }else if(check == 2){
            cin >> s_1 >> s_2;
            rate.at(s_2-1)--;
            score.at(s_1-1).push_back(s_2-1);
        }
    }

    for(int i=0; i<ans.size(); i++){
        cout << ans.at(i) << endl;
    }

    return 0;
}
