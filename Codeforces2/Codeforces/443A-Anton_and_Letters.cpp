#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    set<char> c;

    for (int i = 0; i < s.length(); i++) {
        if(isalpha(s[i])){
            c.insert(s[i]);
        }
    }

    cout << c.size();
}