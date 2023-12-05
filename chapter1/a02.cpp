#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> seq(n);

    for (int i = 0; i < n; i++)
    {
        cin >> seq[i];
    }

    for (int i : seq)
    {
        if (i == x)
        {
            printf("Yes\n");
            exit(0);
        }
    }
    printf("No\n");
    return 0;
}
