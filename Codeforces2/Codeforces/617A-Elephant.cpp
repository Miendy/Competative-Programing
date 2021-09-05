#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x;

    n = x / 5;

    if(x % 5 > 0) {
        n++;
    }
    cout << n;
}

