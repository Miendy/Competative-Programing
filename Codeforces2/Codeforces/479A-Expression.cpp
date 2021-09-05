#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, w, x, y, z, ans;
    cin >> a >> b >> c;

    w = a + b + c;
    x = a * (b + c);
    y = (a + b) * c;
    z = a * b * c;

    cout << max({w, x, y, z});
}

/* 
    a + b + c
    a * (b + c)
    (a + b) * c
    a * b * c
*/