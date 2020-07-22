#include <iostream>

using namespace std;

int main()
{
    int t, n, m, x;
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> x;
        while(n>m)
            n -= m;
        if(n==x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
