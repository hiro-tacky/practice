//fence repair

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int n = 3;
    vector<int> l {8,5,8};

    long int ans = 0;
    priority_queue<int> que;
    for(int i=0; i<n; i++){
        que.push(l.at(i));
    }

    while(que.size() > 1){
        int l1, l2;
        l1 = que.top();
        que.pop();
        l2 = que.top();
        que.pop();

        ans += l1 + l2;
        que.push(l1 + l2);
    }

    cout << ans << endl;
}