#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    string d;
    // add two string in one;
    d.insert(d.end(), a.begin(), a.end());
    sort(d.begin(), d.end());

    cout << d;
}