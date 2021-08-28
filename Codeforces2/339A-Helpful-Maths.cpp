#include<bits/stdc++.h>
using namespace std;

int main()
{	
	string s;
    int arry[105], n;
	cin >> s;
    for(int i = 0; i < s.size(); i += 2)
	{		
		arry[n] = s[i] - 48;
		n++;
	}

	sort(arry, arry + s.size() / 2 + 1);

	cout << arry[0];

	for (int i = 1; i < s.size() / 2 + 1; i++) {
        cout << "+" << arry[i];
    }

}