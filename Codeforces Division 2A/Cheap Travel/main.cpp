#include <iostream>

using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if(a*n < ((b*(n/m)) + (a*(n%m))) || a*n < ((b*(n/m)) + b))
        cout << a*n << "\n";
    else if((a*(n%m))<b)
        cout << ((b*(n/m)) + (a*(n%m))) << "\n";
    else
        cout << ((b*(n/m)) + b) << "\n";
    return 0;
}
