#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a, l, w, ans;
    cin >> n >> m >> a;

    l = n / a;
    w = m / a;

    if (n % a > 0){
        l++;
    }

    if (m % a > 0){
        w++;
    }

    ans = l * w;

    cout << ans;

}