#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, ary[102], ans = -1;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++){
        if(i != 0 && s[i] == s[i-1])
            ary[i] = ary[i-1] + 1;
        else
            ary[i] = 1;
    }

    for (int i = 0; i < s.size(); i++)
    {
        ans = max(ans, ary[i]);
    }

    if (ans >= 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}
