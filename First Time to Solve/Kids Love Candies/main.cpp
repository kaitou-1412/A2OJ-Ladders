#include <iostream>

using namespace std;

int main()
{
    int t, n, k, x;
    cin >> t;
    while(t--)
    {
        int c = 0;
        cin >> n >> k;
        while(n--)
        {
            cin >> x;
            if(x>=k)
                c += x/k;
        }
        cout << c << "\n";
    }
    return 0;
}
