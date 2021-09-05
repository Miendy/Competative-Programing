#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, bob, yr = 0;
    cin >> a >> bob;
    
    while (bob >= a) {
        a = a * 3;
        bob = bob * 2;
        yr++;
    }

    cout << yr;

}