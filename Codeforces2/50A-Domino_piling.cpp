#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, sum;
    cin >> n >> m;

    // if ((m * n) % 2 == 0){
    //     sum = m * n / 2;
    // }else{
    //     sum = (m * n - 1) / 2;
    // }

    sum = m * n / 2;

    cout << sum;
}