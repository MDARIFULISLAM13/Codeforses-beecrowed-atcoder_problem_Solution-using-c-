#include <iostream>
using namespace std;

void fib(int a)
{
    int x = 0;
    int y = 1;
    int next;
    for (int i = 1; i <= a; i++)
    {
        cout << x << " ";
        next = x + y;
        x = y;

        y = next;
    }
}
int main()
{
    int a;
    cin >> a;
    fib(a);
}