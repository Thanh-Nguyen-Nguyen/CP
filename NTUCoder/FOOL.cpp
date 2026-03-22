#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i <= (b); i++)
#define FORD(i, a, b) for(int i = (b); i >= (a); i--)
#define MAXN 101
#define pii pair<int, int>
#define fi first
#define se second
using namespace std;
using ll = long long;
using ull = unsigned long long;
void sol(void)
{
    int t, n, x, y; cin >> t;
    while (t--)
    {
        cin >> n;
        FOR(i, 1, n) cin >> x >> y;
        int res = 0;
        FOR(i, 1, n) res ^= i;
        cout << res << "\n";
    }
}
int main(void)
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sol();
}
