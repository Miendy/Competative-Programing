#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string word;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> word;
        
        if(word.size() > 10){
            cout << word[0] << word.size()-2 << word[word.size()-1] << "\n";
        }else{
            cout << word << "\n";
        }
    }

}