#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 9; i >= 0; i--)
    {
        int div = (1 << i);
        cout << (n / div) % 2;
    }
    cout << endl;
}
