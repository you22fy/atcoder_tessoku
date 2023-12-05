#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int cnt = 0;
    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 1; j < N + 1; j++)
        {
            // 1枚目と２枚目までのカードが決まれば３枚目は総当たりではなく K - (i + j)で確定する
            // K - (i + j)が1 ~ Nの範囲に入っているかを調べれば該当するくみがあるかどうかを調べることができる。
            if(0 < (K - (i+j))  && (K - (i+j)) < N+1) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
