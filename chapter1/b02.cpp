#include <iostream>
#include <string>
#include <map>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    for(int i = a; i < b+1; i++){
        if (100 % i == 0){
            cout << "Yes" <<endl;
            exit(0);
        }
    }
    cout <<"No" << endl;
    return 0;
}

