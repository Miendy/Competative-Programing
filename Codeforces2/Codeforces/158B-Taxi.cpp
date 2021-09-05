#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, w = 0, x = 0, y = 0, z = 0, ans = 0;
    cin >> n;
    int ary[100000];
    
    for (int i = 0; i < n; i++)
    {
        cin >>  ary[i];

        if (ary[i] == 1) {
            w++;
        }

        if (ary[i] == 2) {
            x++;
        }

        if (ary[i] == 3) {
            y++;
        }

        if (ary[i] == 4) {
            z++;
        }
    }

    ans += z;
    
    ans += max(w, y);

    ans += (x + 1) / 2;

    ans += 1 * 4;

    cout << ans;
        
}