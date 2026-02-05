#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i <= (b); i++)
#define FORD(i, a, b) for(int i = (b); i >= (a); --i)
#define N 101
using namespace std;
using ll = long long;
using ull = unsigned long long;
const int MOD = 1e9 + 7;
void sol(void)
{
    int n; cin >> n;
    int a[N];
    FOR(i, 1, n) cin >> a[i];
    FOR(i, 1, n)
    {
        FOR(j, 1, n)
            cout << (a[i] ^ a[j]) << " ";
        cout << "\n";
    }
}
int main(int argc, char* argv[])
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sol();
}
