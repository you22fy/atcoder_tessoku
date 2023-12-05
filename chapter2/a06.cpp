#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n+1), l(q+1), r(q+1);

    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < q + 1; i++)
    {
        cin >> l[i] >> r[i];
    }

    vector<int> s(n+1);
    s[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        s[i] = s[i - 1] + a[i];
    }

    for (int i = 1; i < q + 1; i++)
    {
        cout << s[r[i]] - s[l[i] - 1] << endl;
    }
    return 0;
}
