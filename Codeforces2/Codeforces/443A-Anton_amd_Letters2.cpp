// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);
//     set<char> c;

//     for (auto x : s)
//     {
//         if(isalpha(x)) {
//             c.insert(x);
//         }
//     }

//     cout << c.size();
// }


#include<iostream>
#include<string.h>
 
using namespace std;
 
int main()
{
    char c='0';
    int i,ara[27],count=0;
    for(i=1;i<=26;i++)ara[i]=0;
    while(c!='}')
    {
        cin >> c;
 
        if(c>=97 && c<=122)ara[c-96]++;
    }
 
    for(i=1;i<=26;i++)
    {
        if(ara[i]>0)count++;
    }
    cout << count;
}
