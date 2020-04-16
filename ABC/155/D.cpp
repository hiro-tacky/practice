//  155 D

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    int n, k, buf, num_0, num_pos, num_neg;
    cin >> n >> k;
    vector<int> pos, neg, zero;
    for(int i=0; i<n; i++){
        cin >> buf;
        if(buf < 0) neg.push_back(buf);
        else if(buf == 0) zero.push_back(buf);
        else if(buf > 0) pos.push_back(buf);
    }
    num_pos = (pos.size() * (pos.size() - 1))/2 + (neg.size() * (neg.size() - 1))/2;
    num_neg = pos.size() * neg.size();
    num_0 = (n*(n-1))/2 - num_pos - num_neg;
    // cout << num_pos << " " << num_0 << " " << num_neg << endl;
    vector<long long int> st;
    long long int buf_1, buf_2;
    if(k <= num_neg){
        for(auto itr_pos = pos.begin(); itr_pos != pos.end(); itr_pos++){
            for(auto itr_neg = neg.begin(); itr_neg != neg.end(); itr_neg++){
                buf_1 = *itr_pos;
                buf_2 = *itr_neg;
                // cout << *itr_pos << " " << *itr_neg << " " << *itr_pos * *itr_neg << endl;
                st.push_back(buf_1 * buf_2);
            }
        }
        sort(st.begin(), st.end());
        cout << st.at(k-1) << endl;
    }else if(k <= (num_0 + num_neg)){
        cout << "0" <<endl;
    }else{
        for(auto itr_1 = pos.begin(); itr_1 != pos.end(); itr_1++){
            for(auto itr_2 = itr_1 + 1; itr_2 != pos.end(); itr_2++){
                buf_1 = *itr_1;
                buf_2 = *itr_2;
                // cout << buf_1 << " " << buf_2 << " " << buf_1 * buf_2 << endl;
                st.push_back(buf_1 * buf_2);
            }
        }
        for(auto itr_1 = neg.begin(); itr_1 != neg.end(); itr_1++){
            for(auto itr_2 = itr_1 + 1; itr_2 != neg.end(); itr_2++){
                buf_1 = *itr_1;
                buf_2 = *itr_2;
                // cout << buf_1 << " " << buf_2 << " " << buf_1 * buf_2 << endl;
                st.push_back(buf_1 * buf_2);
            }
        }
        sort(st.begin(), st.end());
        cout << st.at(k-num_neg-num_0-1) << endl;
    }
    return 0;
}