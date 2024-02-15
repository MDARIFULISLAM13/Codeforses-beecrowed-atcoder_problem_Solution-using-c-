#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int d = max(a, max(b, c));
    cout << d;
}