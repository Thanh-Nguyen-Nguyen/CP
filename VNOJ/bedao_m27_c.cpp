#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i <= (b); ++i)
#define FORD(i, a, b) for(int i = (b); i >= (a); --i)
#define MAXN 100001
using namespace std;
using ll = long long;
using ull = unsigned long long;
void sol()
{
    int n, x; cin >> n >> x;
    int s[MAXN] = {0};
    FOR(i, 1, n)
    {
        cin >> s[i];
        s[i] += s[i - 1];
    }

}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sol();
}
