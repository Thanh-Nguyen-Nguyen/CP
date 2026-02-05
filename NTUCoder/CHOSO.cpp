#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i <= (b); i++)
#define FORD(i, a, b) for(int i = (b); i >= (a); i--)
using namespace std;
using ll = long long;
using ull = unsigned long long;
void sol(void)
{
    int n; cin >> n;
    map<int, int> a, b;
    int tmp;
    FOR(i, 1, n)
    {
        cin >> tmp;
        a[tmp]++;
    }
    FOR(i, 1, n)
    {
        cin >> tmp;
        b[tmp]++;
    }
    ull res = 0;
    FOR(i, 1, n)
    {
        cin >> tmp;
        res += (ll)a[tmp] * b[tmp];
    }
    cout << res;
}
int main(void)
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sol();
}
