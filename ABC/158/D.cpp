// ABC159 D

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    string s, t;
    
    cin >> s;
    int q, tmp;
    cin >> q;
    
    for(int i=0; i<q; i++){
        cin >> tmp;
        if(tmp == 1){
            swap(s, t);
        }else if(tmp == 2){
            int f;
            char c;
            cin >> f >> c;
            if(f == 1) t += c;
            else if(f == 2) s += c;
        }
    }
    reverse(t.begin(), t.end());
    t += s;
    cout << t << endl;
    return 0;
}