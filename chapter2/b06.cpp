#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include<algorithm>

using namespace std;

#define rep(i, s, e) for (int i = s; i < e; i++)

int main()
{
    int n, q;
    cin >> n;
    vector<int> a(n+1);
    rep(i,1,n+1){
        cin >> a.at(i);
    }
    vector<int> s(n+1);
    s.at(0) = 0;
    rep(i, 1, n+1){
        s.at(i) = s.at(i-1) + a.at(i);
    }
    cin >> q;
    rep(i, 0, q){
        int l,r;
        cin >> l >> r;
        int win = s.at(r) - s.at(l-1);
        int lose = r-l+1-win;
        if(win > lose) cout << "win" << endl;
        else if(win < lose) cout << "lose" << endl;
        else cout << "draw" << endl;
    }
    return 0;
}

