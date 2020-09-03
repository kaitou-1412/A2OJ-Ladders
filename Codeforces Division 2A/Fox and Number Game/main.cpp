#include <iostream>
#define boost ios::sync_with_stdio(false); cin.tie(0)
using namespace std;

int hcf(int a, int b)
{
    if(a == 0)
        return b;
    return hcf(b%a, a);
}


int main()
{
    boost;
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++)
        cin >> a[i];
    int gcd = a[0];
    for(int i = 1; i<n; i++)
        gcd = hcf(gcd, a[i]);
    cout << (n*gcd) << "\n";
    return 0;
}
