#include <iostream>
#include <string>
#include <map>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int result = 0;

    for(int i = 0; i < 8 ; i++){
        result += (n %2)*(1 << i);
        n /=10;
    }
    cout << result << endl;
    return 0;
}

