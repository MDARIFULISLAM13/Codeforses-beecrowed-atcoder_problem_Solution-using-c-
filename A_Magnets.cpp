#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b;
    int first;
    cin >> first;
    int count = 1;
    for (int i = 0; i < a - 1; i++)
    {
        cin >> b;
        if (b != first)
        {
            count++;
        }
        first = b;
    }
    cout << count << endl;
    ;
}