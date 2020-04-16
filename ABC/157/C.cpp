// ABC157 C

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n, m;
    string anw;
    vector <int> num(n, -1);
    
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int buf_0, buf_1;
        cin >> buf_0 >> buf_1;
        if(num.at(buf_0-1) != buf_1 && num.at(buf_0-1) != -1){
            cout << -1 << endl;
            return 0;
        }else{
            num.at(buf_0-1) = buf_1;
        }
    }

    if(num.at(0) == 0){
        cout << -1 << endl;
        return 0;
    }else if(num.at(0) == -1){
        anw += to_string(1);
    }else{
        anw += to_string(num.at(0));
    }

    for(int i=1; i<n; i++){
        if(num.at(i) == -1){
            anw += to_string(0);
        }else{
            anw += to_string(num.at(i));
        }
    }

    cout << anw << endl;
    return 0;
}