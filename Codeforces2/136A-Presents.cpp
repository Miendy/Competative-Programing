#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    int ary[n + 1];

    for(int i = 1; i <= n; i++) {
        cin >> k;
        ary[k] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << ary[i] << " ";
    }

}