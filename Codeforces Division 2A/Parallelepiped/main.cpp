#include <iostream>
#include <cmath>
#define boost ios::sync_with_stdio(false); cin.tie(0)
using namespace std;

int main()
{
    boost;
    long long int a, b, c;
    cin >> a >> b >> c;
    long long int s = sqrt(a*b*c);
    cout << 4*((s/a) + (s/b) + (s/c)) << "\n";
    return 0;
}
