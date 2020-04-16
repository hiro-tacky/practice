// ABC162 D

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n, r_siz, g_siz, b_siz;
    long int sum = 0;
    cin >> n;
    string str;
    cin >> str;
    vector<int> r, g, b;
    for(int i=0; i < n; i++){
        switch (str.at(i)){
        case 'R':
            r.push_back(i);
            break;
        case 'G':
            g.push_back(i);
            break;
        case 'B':
            b.push_back(i);
            break;
        default:
            break;
        }
    }
    r_siz = r.size();
    g_siz = g.size();
    b_siz = b.size();
    for(int i = 0; i < r_siz; i++){
        for(int j = 0; j < g_siz; j++){
            for(int k = 0; k < b_siz; k++){
                if(abs(r.at(i) - g.at(j)) != abs(g.at(j) - b.at(k)) && abs(r.at(i) - g.at(j)) != abs(r.at(i) - b.at(k)) && abs(r.at(i) - b.at(k)) != abs(g.at(j) - b.at(k))){
                    // cout << "i: " << r.at(i) << "  j: " << g.at(j) << "  k: " << b.at(k) << endl;
                    sum++;
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}