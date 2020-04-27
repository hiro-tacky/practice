// 154 A

#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, t, u;
    cin >> s >> t;
    int a, b;
    cin >> a >> b;
    cin >> u;
    if(s == u) a--;
    else if(t == u) b--;
    cout << a << " " << b;
    return 0;
}
