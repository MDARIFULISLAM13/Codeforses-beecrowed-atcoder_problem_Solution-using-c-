
#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#include <bits/stdc++.h>
using namespace std;
#define s1(a) scanf("%d", &a)
#define s2(a, b) scanf("%d %d", &a, &b)
#define s3(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define s4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d)
#define sl1(a) scanf("%lld", &a)
#define sl2(a, b) scanf("%lld %lld", &a, &b)
#define sl3(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)
#define sl4(a, b, c, d) scanf("%lld %lld %lld %lld", &a, &b, &c, &d)
#define p1(a) printf("%d", a)
#define p2(a, b) printf("%d %d", a, b)
#define p3(a, b, c) printf("%d %d %d", a, b, c)
#define pl1(a) printf("%lld", a)
#define pl2(a, b) printf("%lld %lld", a, b)
#define pl3(a, b, c) printf("%lld %lld %lld", a, b, c)
#define nl printf("\n")
#define sfc(a) scanf("%c", &a)
#define pbp(a, b) push_back({a, b})
#define db double
#define ft float
#define ll long long
#define ull unsigned long long
#define ff first
#define ss second
#define pi pair<ll, ll>
#define pii pair<pi, ll>
#define memo(a, b) memset(a, b, sizeof(a))
#define pb push_back
#define MAX3(a, b, c) max(a, max(b, c))
#define MIN3(a, b, c) min(a, min(b, c))
#define vec vector<ll>
#define vp vector<pi>
#define all(a) a.begin(), a.end()
#define PI acos(-1)
#define sr(a) sort(all(a))
#define sra(a, n) sort(a + 1, a + n + 1)
#define yes cout << "YES" \
                 << "\n"
#define no cout << "NO" \
                << "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define sz(x) x.size()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) * ((b) / gcd(a, b)))
#define valid(tx, ty) tx >= 0 && tx < row &&ty >= 0 && ty < col
/*------------------------ll n,k,x;while------Graph Moves----------------------------*/
// const int fx[]={+1,-1,+0,+0};
// const int fy[]={+0,+0,+1,-1};
// const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
// const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
// const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//-const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/
///***** bit *****///
#define check_bit(a, b) (a & (1ll << b))
#define set_bit(a, b) (a | (1ll << b))
#define total_bit(a) __builtin_popcount(a)
const ll N = 1e5;
const ll mod = 1e9 + 7;
const ll mx = 2e5 + 5;

int cs(const int *a, int n, int x, int y)
{
    int b = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((a[i] + a[j]) % x == 0 && (a[i] - a[j]) % y == 0)
            {
                b++;
            }
        }
    }

    return b;
}

int main()
{

    ios_base::sync_with_stdio(false), cin.tie(NULL);

    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);

        int *a = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int rt = cs(a, n, x, y);
        printf("%d\n", rt);

        free(a);
    }

    return 0;
}