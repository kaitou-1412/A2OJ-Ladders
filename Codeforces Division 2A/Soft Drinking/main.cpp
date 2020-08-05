#include <iostream>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink = k*l, lime = c*d, toasts = 0;
    while(drink >= n*nl && lime >= n && p >= n*np)
    {
        toasts++;
        drink -= n*nl;
        lime -= n;
        p -= n*np;
    }
    cout << toasts << "\n";
    return 0;
}
