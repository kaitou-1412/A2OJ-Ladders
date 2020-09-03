#include <iostream>
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long int
using namespace std;

int main()
{
    boost;
    ll k, l;
    cin >> k >> l;
    int n = 0;
    while(l!=1)
    {
        if(l%k == 0)
        {
            n++;
            l /= k;
        }
        else
            break;
    }
    if(n == 0 || l != 1)
        cout << "NO\n";
    else
        cout << "YES\n" << (n-1) << "\n";
    return 0;
}
