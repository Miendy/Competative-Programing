#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    while (n >= 100)
    {
        sum++;
        n-=100;
    }
    
    while (n >= 20)
    {
        sum++;
        n-=20;
    }
    
    while (n >= 10)
    {
        sum++;
        n-=10;
    }
    
    while (n >= 5)
    {
        sum++;
        n-=5;
    }
    
    while (n >= 1)
    {
        sum++;
        n-=1;
    }

    cout << sum;
    
}
