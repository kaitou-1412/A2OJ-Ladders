#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    long long int v = ceil(n*1.0/2);
    if(k <= v)
        cout << (2*k -1) << "\n";
    else
    {
        k -= v;
        cout << (2*k) << "\n";
    }
    return 0;
}
