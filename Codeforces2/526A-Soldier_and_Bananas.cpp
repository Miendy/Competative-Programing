#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w, x, sum = 0;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++) {
        
        sum += i; // 1 3 6 10
        
    }

    x = (sum * k) - n;

    if (x < 0) {
        cout << "0";
    } else {
        cout << x;
    }

}

/* 
3 + 6 + 9 + 12 = 
*/