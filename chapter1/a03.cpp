#include <iostream>
#include <string>
#include <map>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> p(n), q(n);
    for(int i = 0 ; i < n ; i++){
        cin >> p[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin >> q[i];
    }

    for(int p_i : p){
        for(int q_i : q){
            if(p_i + q_i == k){
                cout << "Yes" << endl;
                exit(0);
            }
        }
    }
    cout << "No" << endl;
    return 0;
}

