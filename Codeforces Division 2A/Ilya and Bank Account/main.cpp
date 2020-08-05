#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n >= 0)
        cout << n << "\n";
    else
    {
        n = abs(n);
        int v = ((n/10) < (10*(n/100) + n%10)) ? (n/10) : (10*(n/100) + n%10);
        if(v == 0)
            cout << "0\n";
        else
            cout << "-" << v << "\n";
    }
    return 0;
}
