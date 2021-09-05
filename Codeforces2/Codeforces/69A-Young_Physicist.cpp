#include<bits./stdc++.h>
using namespace std;

int main()
{
    int n, x, y, z, xn = 0, yn = 0, zn = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        xn += x;
        yn += y;
        zn += z;
    }
    
    if (xn == 0 && yn == 0 && zn == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}