#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        ++count;
        cout << "Case " << count << ":\n";
        int max = 0;
        int maxb = 0;
        string p, pp, ppp = "http://www.lightoj.com";
        while (1)
        {
            string a;
            cin >> a;

            if (a == "QUIT")
            {
                break;
            }
            else if (a == "VISIT")
            {
                string b;
                cin >> b;
                cout << b << endl;
                max = 0;
                maxb = 0;
                pp = p;
                p = b;
            }
            else if (a == "FORWARD")
            {

                ++max;
                if (max > 2)
                {
                    cout << "Ignored\n";
                }
                maxb = 0;
                cout << p << endl;
            }
            else if (a == "BACK")
            {

                maxb++;
                if (maxb > 2)
                {
                    cout << "Ignored\n";
                }
                if (maxb == 1)
                {
                    cout << pp << endl;
                    p = pp;
                }
                else if (maxb == 2)
                {
                    cout << ppp << endl;
                    p = ppp;
                }
                max = 0;
            }
        }
    }
}
