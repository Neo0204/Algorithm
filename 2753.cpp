#include <bits/stdc++.h>

using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int year;

    cin >> year;

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 ) ) cout << 1;

    else cout << 0;

    return 0;
}