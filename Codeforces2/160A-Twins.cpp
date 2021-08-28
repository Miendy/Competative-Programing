#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, me = 0, br = 0, a[105], cnt = 0, i;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        br += a[i];
    }

    sort(a, a + n);
    
    for (i = n - 1; i >= 0; i--)
    {
        me += a[i];
        cnt++;
        br -= a[i];

        if (me > br) {
            break;
        }
    }
    
    cout << cnt;

}