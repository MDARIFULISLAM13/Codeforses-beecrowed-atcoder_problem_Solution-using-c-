#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a > 0)
    {
        a--;
        int b;
        cin >> b;
        for (int i = 2; i <= b; i++)
        {
            if (i == b)
            {
                cout << b;
                cout << " eh primo\n";
                break;
            }
            if (b % i != 0)
            {
                continue;
            }
            else
            {
                cout << b;
                cout << " nao eh primo\n";
                break;
            }
        }
    }
}