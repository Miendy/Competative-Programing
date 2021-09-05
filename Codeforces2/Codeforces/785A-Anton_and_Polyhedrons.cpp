#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    string s;
    map<string, int> m;
    cin >> n;

    m["Tetrahedron"] = 4;
    m["Cube"] = 6;
    m["Octahedron"] = 8;
    m["Dodecahedron"] = 12;
    m["Icosahedron"] = 20;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        ans += m[s];
    }

    cout << ans;

}