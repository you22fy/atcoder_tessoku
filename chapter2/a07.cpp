#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i, s, e) for (int i = s; i < e; i++)

int main()
{
    int d, n;
    cin >> d >> n;
    vector<int> v(d + 2); // 使用しない0番目と最終日前日比を入れるd+2番目が必要
    rep(i, 1, n+1)
    {
        int l, r;
        cin >> l >> r;
        v.at(l) += 1;
        v.at(r + 1) -= 1;
    }

    vector<int> s(d + 1);
    s.at(0) = 0;
    rep(i, 1, d + 1)
    {
        s.at(i) = s.at(i - 1) + v.at(i);
    }
    rep(i, 1, d + 1)
    {
        cout << s.at(i) << endl;
    }
    return 0;
}
