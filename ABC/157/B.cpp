// ABC157 B

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<vector<int>> a(3, vector<int>(3, 0));
    vector<vector<bool>> bingo(3, vector<bool>(3, false));
    for(int i=0; i<3; i++){
        cin >> a.at(i).at(0) >> a.at(i).at(1) >> a.at(i).at(2);
    }

    int n, tmp;
    cin >> n;

    vector<int> b;
    for(int i=0; i<n; i++){
        cin >> tmp;
        for(int x=0; x<3; x++){
            for(int y=0; y<3; y++){
                if(a.at(x).at(y) == tmp){
                    bingo.at(x).at(y) = true;
                }
            }
        }
    }

    for(int i=0; i<3; i++){
        if(bingo.at(i).at(0) && bingo.at(i).at(1) && bingo.at(i).at(2)){
            cout << "Yes" << endl;
            return 0;
        }
    }

    for(int i=0; i<3; i++){
        if(bingo.at(0).at(i) && bingo.at(1).at(i) && bingo.at(2).at(i)){
            cout << "Yes" << endl;
            return 0;
        }
    }

    if(bingo.at(0).at(0) && bingo.at(1).at(1) && bingo.at(2).at(2)){
        cout << "Yes" << endl;
        return 0;
    }

    if(bingo.at(0).at(2) && bingo.at(1).at(1) && bingo.at(2).at(0)){
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

    return 0;
}