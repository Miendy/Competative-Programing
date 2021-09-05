#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n, o = 0;
    string a;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a[1] == '+'){
            o++;
        }else{
            o--;
        }
    }

    cout << o;

}