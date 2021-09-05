#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;    
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {      
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i' || s[i] == 'A' || s[i] == 'O' || s[i] == 'Y' || s[i] == 'E' || s[i] == 'U' || s[i] == 'I') {
            continue;
        }

        cout << ".";

        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }

        cout << s[i];

    }
}